#include <iostream>
#include <string>
using namespace std;

int main() {
    const int lenNameList = 30;
    string nameList[lenNameList] { "Carrie Cooter", "Alyse Gowers", "Bianca Surita", "Isidra Farrington", 
    "Zenia Treece", "Andree Eggers", "Coleman Zygmont", "Zachary Comes", "Dawn Mckendrick", "Sabine Lujan", 
    "Mauro Coplin", "Lavonna Dostal", "Isobel Melendy", "Elicia Defoor", "Lavada Laino", "Shari Auer", 
    "Ariel Wofford", "Elvera Brandl", "Lavon Setser", "Florrie Recker", "Marie Thorsen", "Nenita Barta", 
    "Linnie Juarez", "Glory Bee", "Norine Zaragosa", "Gayla Coto", "Devon Starrett", "Dreama Longshore", 
    "Benton Caron", "Lucilla Landeros"
    };
    
    for (int i = 0; i <= lenNameList; i++) {
        for (int j = 0; j < lenNameList-1; j++) {
          if (nameList[j] > nameList[j+1]) {
            swap(nameList[j], nameList[j+1]);
            //cout << "swapping " << nameList[j] << " and " << nameList[j+1] << endl;
          }
        }
        
    }
    
    for (int x = 0; x <= lenNameList; x++) {
        cout << nameList[x] << endl;
    }
    return 0;
}