#include <curl/curl.h>
//#include <wx/wxhtml.h>
//#include <Ultralight/Ultralight.h>
#include <iostream>
#include <fstream>
//#include </home/samuel/Downloads/ultralight-sdk-1.0-linux/include/>
#include <string>
using namespace std;
 
//callback function to write data
size_t writeFunction(void *contents, size_t size, size_t nmemb, string *raw_html) {
    size_t newLength = size*nmemb;
    try {
        raw_html->append((char*)contents, newLength);
    }
    catch(std::bad_alloc &e) {
        //handle memory problem
        return 0;
    }
    return newLength;
}
 
int main() {
    bool browse;
    string enteredURL, finalURL, raw_html, keepBrowsingChoice;
    ofstream writeHistoryFile;
 
    //create curl instance
    CURL *curl = curl_easy_init();
    CURLcode res;
   
    cout << "Welcome to BruhBrowser!" << endl;
    do {
        cout << "Enter URL: https://";
        cin >> enteredURL;
        finalURL = "http://" + enteredURL;
 
        /*^^^ THIS DOESN't WORK: CURLOPT_URL CAN'T TAKE A STRING?
        DOCS: https://curl.haxx.se/libcurl/c/CURLOPT_URL.html
        I want to use user input for the url, but to test the program just replace
        finalURL with an actual url
        */
 
        //cURL CONFIGURATION
        curl_easy_setopt (curl, CURLOPT_VERBOSE, 1L);                   //verbose output
        curl_easy_setopt(curl, CURLOPT_URL, finalURL);                  //normal dns request
        curl_easy_setopt(curl, CURLOPT_DOH_URL,
                        "https://doh.appliedprivacy.net/query");        //DNS over https
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);             //follow redirects
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);   //callback for writing data
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &raw_html);           //write data to string raw_html
 
        //cURL to site
        res = curl_easy_perform(curl);
       
        cout << raw_html;
        htmlwin->SetPage(raw_html);
        writeHistoryFile.open("history.txt", ios_base::app);
        writeHistoryFile << finalURL << "\n";
        writeHistoryFile.close();
 
        cout << "Navigate to another website? [y/n]: ";
        cin >> keepBrowsingChoice;
        if ((keepBrowsingChoice.compare("y")) == 0) {
            browse = true;
        }
        else {
            browse = false;
        }
 
    } while(browse);
 
 
    cout << "Clear History? [y/n]: ";
    string userHistoryChoice;
    cin >> userHistoryChoice;
    if ((userHistoryChoice.compare("y")) == 0) {
        writeHistoryFile.open("history.txt");
        writeHistoryFile << "";
        writeHistoryFile.close();
        cout << "History Cleared!" << endl;
    }
   
    curl_easy_cleanup(curl);
    return 0;
}