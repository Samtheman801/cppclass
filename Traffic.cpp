#include <iostream>
#include <string>
using namespace std;

//Red: Add 18-35+ mins to your time, while going 0-9MPH. (20-30 hwy)
//Yellow: Add 10-13 mins to your time, while going 18-22MPH.(30-45 hwy)
//Green: Add 0-4 mins to your time, while going 10-25MPH+ (45-65 hwy)
 
//miles and speed limits
//jacobusAve (20mph) =                     0.5 miles total
//notchRd (20mph) =                        0.5 miles total, 0.1 yellow 
//rt46 (55 mph) =                          0.6 miles total
//rt3 (55 mph) =                           8.2 miles total, 0.8 yellow       
//rt95 (65 mph) =                          7.9 miles total, 0.5 yellow       
//rt78 (65 mph) =                          6.0 miles total, 1.1 yellow, 0.7 red
//rt612 (30 mph) =                         0.2 miles total, 0.2 yellow
//johnstonAve (30 mph) =                   0.3 miles total
//pacificAve (30mph) =                     0.3 miles total, 0.3 yellow
//grandSt (30 mph) =                       0.8 miles total, 0.4 yellow

int main() {

//How many minutes taken to travel through each road
    float jacobusAve = 1.5;
    float notchRd = 11.5;
    float rt46 = 0.4;
    float rt3 = 19;
    float rt95 = 17.2;
    float rt78 = 20;
    float rt612 = 2;
    float johnstonAve = 0.5;
    float pacificAve = 1;
    float grandSt = 5;

    float totalTravelTime;
    totalTravelTime = (jacobusAve+notchRd+rt46+rt3+rt95+rt78+rt612+johnstonAve+pacificAve+grandSt);

    cout << "It will take " << totalTravelTime << " minutes to get to school from here right now." << endl;
    cout << "If you leave at 7:00 AM, you will arrive at school at 8:19 AM." << endl;
    cout << "To get to school by 8:09 AM, you have to leave at 6:50 AM." << endl;
    
    return 0;
}
