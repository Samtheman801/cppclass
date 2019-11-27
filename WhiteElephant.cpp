/*
Samuel Leonte
Gavin O'Farrell
XY 1 Part 2 - White Elephant
*/

#include <iostream>
#include <string>
using namespace std;

//Define all variables globally because of multiple function use
bool runAgain;
string gift1 = "coffee mug";
bool gift1Taken;
string gift2 = "video game";
bool gift2Taken;
string gift3 = "football";
bool gift3Taken;
string gift4 = "soccer ball";
bool gift4Taken;
string gift5 = "chromebook";
bool gift5Taken;
string gift6 = "flip phone";
bool gift6Taken;
int user1Choice, user2Choice, user3Choice, user4Choice, user5Choice, user6Choice;
int user1StealChoice, user2StealChoice, user3StealChoice, user4StealChoice, user5StealChoice, user6StealChoice;
int user1Gift, user2Gift, user3Gift, user4Gift, user5Gift, user6Gift;
string strUser1Gift, strUser2Gift, strUser3Gift, strUser4Gift, strUser5Gift, strUser6Gift;

//define multiple functions
void user1TurnAlt(), user1Turn(), user2Turn(), user3Turn(), user4Turn(), user5Turn(), user6Turn();
void endOfRound(), endOfGame();
bool giftCheck();

//call functions to construct program
int main() {
    bool stopRunning;
    user1TurnAlt();
    user2Turn();
    user3Turn();
    user4Turn();
    user5Turn();
    user6Turn();
    endOfRound();

    while (stopRunning == false) {
        user1Turn();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
        user2Turn();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
        user3Turn();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
        user4Turn();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
        user5Turn();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
        user6Turn();
        endOfRound();
        if (giftCheck()) {
            stopRunning = true;
            endOfGame();
            break;
        }
    }
    return 0;
}

void user1Turn() {
    cout << "\n\nUSER 1'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 6's gift (" << strUser6Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user1Choice;
    if (user1Choice == 1) {
        cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user1StealChoice;
        // if (user1StealChoice == 1) {
        //   cout << "User 1 has stolen the " << strUser1Gift << " from User 1." << endl;
        //   user1Gift = user1Gift;
        //   strUser1Gift = strUser1Gift;
        //   user1Gift = 0;
        //   strUser1Gift = "";
        // }
        if (user1StealChoice == 2) {
          cout << "User 1 has stolen the " << strUser2Gift << " from User 2." << endl;
          user1Gift = user2Gift;
          strUser1Gift = strUser2Gift;
          user2Gift = 0;
          strUser2Gift = "";
        }
        else if (user1StealChoice == 3) {
          cout << "User 1 has stolen the " << strUser3Gift << " from User 3." << endl;
          user1Gift = user3Gift;
          strUser1Gift = strUser3Gift;
          user3Gift = 0;
          strUser3Gift = "";
        }
        else if (user1StealChoice == 4) {
          cout << "User 1 has stolen the " << strUser4Gift << " from User 4." << endl;
          user1Gift = user4Gift;
          strUser1Gift = strUser4Gift;
          user4Gift = 0;
          strUser4Gift = "";
        }
        else if (user1StealChoice == 5) {
          cout << "User 1 has stolen the " << strUser5Gift << " from User 5." << endl;
          user1Gift = user5Gift;
          strUser1Gift = strUser5Gift;
          user5Gift = 0;
          strUser5Gift = "";
        }
        else if (user1StealChoice == 6) {
          cout << "User 1 has stolen the " << strUser6Gift << " from User 6." << endl;
          user1Gift = user6Gift;
          strUser1Gift = strUser6Gift;
          user6Gift = 0;
          strUser6Gift = "";
      }
    }
    else if (user1Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user1Gift;
            switch (user1Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser1Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser1Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser1Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser1Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser1Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser1Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void user1TurnAlt() {
    cout << "\n\nUSER 1'S TURN!\n\n" << endl;
    cout << "Which gift would you like to choose(1-6)?" << endl;
    cout << ">";
    cin >> user1Gift;
    switch (user1Gift) {
        case 1: {
            cout << "You have unwrapped a " << gift1 << "!" << endl;
            strUser1Gift = gift1;
            gift1Taken = true;
            break;
        }
        case 2: {
            cout << "You have unwrapped a " << gift2 << "!" << endl;
            strUser1Gift = gift2;
            gift2Taken = true;
            break;
        }
        case 3: {
            cout << "You have unwrapped a " << gift3 << "!" << endl;
            strUser1Gift = gift3;
            gift3Taken = true;
            break;
        }
        case 4: {
            cout << "You have unwrapped a " << gift4 << "!" << endl;
            strUser1Gift = gift4;
            gift4Taken = true;
            break;
        }
        case 5: {
            cout << "You have unwrapped a " << gift5 << "!" << endl;
            strUser1Gift = gift5;
            gift5Taken = true;
            break;
        }
        case 6: {
            cout << "You have unwrapped a " << gift6 << "!" << endl;
            strUser1Gift = gift6;
            gift6Taken = true;
            break;
        }
    }
}

void user2Turn() {
    cout << "\n\nUSER 2'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 1's gift (" << strUser1Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user2Choice;
    if (user2Choice == 1) {
        cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user2StealChoice;
        if (user2StealChoice == 1) {
          cout << "User 2 has stolen the " << strUser1Gift << " from User 1." << endl;
          user2Gift = user1Gift;
          strUser2Gift = strUser1Gift;
          user1Gift = 0;
          strUser1Gift = "";
        }
        // else if (user2StealChoice == 2) {
        //   cout << "User 2 has stolen the " << strUser2Gift << " from User 2." << endl;
        //   user2Gift = user2Gift;
        //   strUser2Gift = strUser2Gift;
        //   user2Gift = 0;
        //   strUser2Gift = "";
        // }
        else if (user2StealChoice == 3) {
          cout << "User 2 has stolen the " << strUser3Gift << " from User 3." << endl;
          user2Gift = user3Gift;
          strUser2Gift = strUser3Gift;
          user3Gift = 0;
          strUser3Gift = "";
        }
        else if (user2StealChoice == 4) {
          cout << "User 2 has stolen the " << strUser4Gift << " from User 4." << endl;
          user2Gift = user4Gift;
          strUser2Gift = strUser4Gift;
          user4Gift = 0;
          strUser4Gift = "";
        }
        else if (user2StealChoice == 5) {
          cout << "User 2 has stolen the " << strUser5Gift << " from User 5." << endl;
          user2Gift = user5Gift;
          strUser2Gift = strUser5Gift;
          user5Gift = 0;
          strUser5Gift = "";
        }
        else if (user2StealChoice == 6) {
          cout << "User 2 has stolen the " << strUser6Gift << " from User 6." << endl;
          user2Gift = user6Gift;
          strUser2Gift = strUser6Gift;
          user6Gift = 0;
          strUser6Gift = "";
      }
    }
    else if (user2Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user2Gift;
            switch (user2Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser2Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser2Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser2Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser2Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser2Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser2Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void user3Turn() {
    cout << "\n\nUSER 3'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 2's gift (" << strUser2Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user3Choice;
    if (user3Choice == 1) {
        cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user3StealChoice;
        if (user3StealChoice == 1) {
          cout << "User 3 has stolen the " << strUser1Gift << " from User 1." << endl;
          user3Gift = user1Gift;
          strUser3Gift = strUser1Gift;
          user1Gift = 0;
          strUser1Gift = "";
        }
        else if (user3StealChoice == 2) {
          cout << "User 3 has stolen the " << strUser2Gift << " from User 2." << endl;
          user3Gift = user2Gift;
          strUser3Gift = strUser2Gift;
          user2Gift = 0;
          strUser2Gift = "";
        }
        // else if (user3StealChoice == 3) {
        //   cout << "User 3 has stolen the " << strUser3Gift << " from User 3." << endl;
        //   user3Gift = user3Gift;
        //   strUserGift = strUser3Gift;
        //   user3Gift = 0;
        //   strUser3Gift = "";
        // }
        else if (user3StealChoice == 4) {
          cout << "User 3 has stolen the " << strUser4Gift << " from User 4." << endl;
          user3Gift = user4Gift;
          strUser3Gift = strUser4Gift;
          user4Gift = 0;
          strUser4Gift = "";
        }
        else if (user3StealChoice == 5) {
          cout << "User 3 has stolen the " << strUser5Gift << " from User 5." << endl;
          user3Gift = user5Gift;
          strUser3Gift = strUser5Gift;
          user5Gift = 0;
          strUser5Gift = "";
        }
        else if (user3StealChoice == 6) {
          cout << "User 3 has stolen the " << strUser6Gift << " from User 6." << endl;
          user3Gift = user6Gift;
          strUser3Gift = strUser6Gift;
          user6Gift = 0;
          strUser6Gift = "";
      }
    }
    else if (user3Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user3Gift;
            switch (user3Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser3Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser3Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser3Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser3Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser3Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser3Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void user4Turn() {
    cout << "\n\nUSER 4'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 3's gift (" << strUser3Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user4Choice;
    if (user4Choice == 1) {
                cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user4StealChoice;
        if (user4StealChoice == 1) {
          cout << "User 4 has stolen the " << strUser1Gift << " from User 1." << endl;
          user4Gift = user1Gift;
          strUser4Gift = strUser1Gift;
          user1Gift = 0;
          strUser1Gift = "";
        }
        else if (user4StealChoice == 2) {
          cout << "User 4 has stolen the " << strUser2Gift << " from User 2." << endl;
          user4Gift = user2Gift;
          strUser4Gift = strUser2Gift;
          user2Gift = 0;
          strUser2Gift = "";
        }
        else if (user4StealChoice == 3) {
          cout << "User 4 has stolen the " << strUser3Gift << " from User 3." << endl;
          user4Gift = user3Gift;
          strUser4Gift = strUser3Gift;
          user3Gift = 0;
          strUser3Gift = "";
        }
        // else if (user4StealChoice == 4) {
        //   cout << "User 4 has stolen the " << strUser4Gift << " from User 4." << endl;
        //   user4Gift = user4Gift;
        //   strUser4Gift = strUser4Gift;
        //   user4Gift = 0;
        //   strUser4Gift = "";
        // }
        else if (user4StealChoice == 5) {
          cout << "User 4 has stolen the " << strUser5Gift << " from User 5." << endl;
          user4Gift = user5Gift;
          strUser4Gift = strUser5Gift;
          user5Gift = 0;
          strUser5Gift = "";
        }
        else if (user4StealChoice == 6) {
          cout << "User 4 has stolen the " << strUser6Gift << " from User 6." << endl;
          user4Gift = user6Gift;
          strUser4Gift = strUser6Gift;
          user6Gift = 0;
          strUser6Gift = "";
      }
    }
    else if (user4Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user4Gift;
            switch (user4Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser4Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser4Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser4Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser4Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser4Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser4Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void user5Turn() {
    cout << "\n\nUSER 5'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 4's gift (" << strUser4Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user5Choice;
    if (user5Choice == 1) {
                cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user2StealChoice;
        if (user5StealChoice == 1) {
          cout << "User 5 has stolen the " << strUser1Gift << " from User 1." << endl;
          user5Gift = user1Gift;
          strUser5Gift = strUser1Gift;
          user1Gift = 0;
          strUser1Gift = "";
        }
        else if (user5StealChoice == 2) {
          cout << "User 5 has stolen the " << strUser2Gift << " from User 2." << endl;
          user5Gift = user2Gift;
          strUser5Gift = strUser2Gift;
          user2Gift = 0;
          strUser2Gift = "";
        }
        else if (user5StealChoice == 3) {
          cout << "User 5 has stolen the " << strUser3Gift << " from User 3." << endl;
          user5Gift = user3Gift;
          strUser5Gift = strUser3Gift;
          user3Gift = 0;
          strUser3Gift = "";
        }
        else if (user5StealChoice == 4) {
          cout << "User 5 has stolen the " << strUser4Gift << " from User 4." << endl;
          user5Gift = user4Gift;
          strUser5Gift = strUser4Gift;
          user4Gift = 0;
          strUser4Gift = "";
        }
        // else if (user5StealChoice == 5) {
        //   cout << "User 5 has stolen the " << strUser5Gift << " from User 5." << endl;
        //   user5Gift = user5Gift;
        //   strUser5Gift = strUser5Gift;
        //   user5Gift = 0;
        //   strUser5Gift = "";
        // }
        else if (user5StealChoice == 6) {
          cout << "User 5 has stolen the " << strUser6Gift << " from User 6." << endl;
          user5Gift = user6Gift;
          strUser5Gift = strUser6Gift;
          user6Gift = 0;
          strUser6Gift = "";
      }
    }
    else if (user5Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user5Gift;
            switch (user5Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser5Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser5Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser5Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser5Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser5Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser5Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void user6Turn() {
    cout << "\n\nUSER 6'S TURN!\n\n" << endl;
    cout << "Would you like to steal User 5's gift (" << strUser5Gift << "), or pick another one? (1-6)?" << endl;
    cout << "1. Steal\n2. Pick Another" << endl;
    cout << ">";
    cin >> user6Choice;
    if (user6Choice == 1) {
                cout << "Steal from which player?" << endl;
        if (user1Gift != 0) {
          cout << "User 1 (" << strUser1Gift << ")" << endl;
        }
        if (user2Gift != 0) {
          cout << "User 2 (" << strUser2Gift << ")" << endl;
        }
        if (user3Gift != 0) {
          cout << "User 3 (" << strUser3Gift << ")" << endl;
        }
        if (user4Gift != 0) {
          cout << "User 4 (" << strUser4Gift << ")" << endl;
        }
        if (user5Gift != 0) {
          cout << "User 5 (" << strUser5Gift << ")" << endl;
        }
        if (user6Gift != 0) {
          cout << "User 6 (" << strUser6Gift << ")" << endl;
        }
        cout << ">";
        cin >> user6StealChoice;
        if (user6StealChoice == 1) {
          cout << "User 6 has stolen the " << strUser1Gift << " from User 1." << endl;
          user6Gift = user1Gift;
          strUser6Gift = strUser1Gift;
          user1Gift = 0;
          strUser1Gift = "";
        }
        else if (user6StealChoice == 2) {
          cout << "User 6 has stolen the " << strUser2Gift << " from User 2." << endl;
          user6Gift = user2Gift;
          strUser6Gift = strUser2Gift;
          user2Gift = 0;
          strUser2Gift = "";
        }
        else if (user6StealChoice == 3) {
          cout << "User 6 has stolen the " << strUser3Gift << " from User 3." << endl;
          user6Gift = user3Gift;
          strUser6Gift = strUser3Gift;
          user3Gift = 0;
          strUser3Gift = "";
        }
        else if (user6StealChoice == 4) {
          cout << "User 6 has stolen the " << strUser4Gift << " from User 4." << endl;
          user6Gift = user4Gift;
          strUser6Gift = strUser4Gift;
          user4Gift = 0;
          strUser4Gift = "";
        }
        else if (user6StealChoice == 5) {
          cout << "User 6 has stolen the " << strUser5Gift << " from User 5." << endl;
          user6Gift = user5Gift;
          strUser6Gift = strUser5Gift;
          user5Gift = 0;
          strUser5Gift = "";
        }
        // else if (user6StealChoice == 6) {
        //   cout << "User 6 has stolen the " << strUser6Gift << " from User 6." << endl;
        //   user6Gift = user6Gift;
        //   strUser6Gift = strUser6Gift;
        //   user6Gift = 0;
        //   strUser6Gift = "";
        // }
    }
    else if (user6Choice == 2) {
        cout << "Which gift would you like to choose(1-6)?" << endl;
        do {
            cout << ">";
            cin >> user6Gift;
            switch (user6Gift) {
                case 1: {
                    if (gift1Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift1 << "!" << endl;
                    strUser6Gift = gift1;
                    gift1Taken = true;
                    runAgain = false;
                    break;
                }
                case 2: {
                    if (gift2Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift2 << "!" << endl;
                    strUser6Gift = gift2;
                    gift2Taken = true;
                    runAgain = false;
                    break;
                }
                case 3: {
                    if (gift3Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift3 << "!" << endl;
                    strUser6Gift = gift3;
                    gift3Taken = true;
                    runAgain = false;
                    break;
                }
                case 4: {
                    if (gift4Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift4 << "!" << endl;
                    strUser6Gift = gift4;
                    gift4Taken = true;
                    runAgain = false;
                    break;
                }
                case 5: {
                    if (gift5Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift5 << "!" << endl;
                    strUser6Gift = gift5;
                    gift5Taken = true;
                    runAgain = false;
                    break;
                }
                case 6: {
                    if (gift6Taken) {
                        cout << "This gift has been chosen already. Pick again." << endl;
                        runAgain = true;
                        break;
                    }
                    cout << "You have unwrapped a " << gift6 << "!" << endl;
                    strUser6Gift = gift6;
                    gift6Taken = true;
                    runAgain = false;
                    break;
                }
            }
        } while (runAgain);
    }
}

void endOfRound() {
    cout << "\n\nEND OF ROUND!\n\n" << endl;
    cout << "User 1 Gift: " << strUser1Gift << endl;
    cout << "User 2 Gift: " << strUser2Gift << endl;
    cout << "User 3 Gift: " << strUser3Gift << endl;
    cout << "User 4 Gift: " << strUser4Gift << endl;
    cout << "User 5 Gift: " << strUser5Gift << endl;
    cout << "User 6 Gift: " << strUser6Gift << endl;
}

void endOfGame() {
    cout << "\n\nGAME OVER!\n\n" << endl;
    cout << "User 1 Gift: " << strUser1Gift << endl;
    cout << "User 2 Gift: " << strUser2Gift << endl;
    cout << "User 3 Gift: " << strUser3Gift << endl;
    cout << "User 4 Gift: " << strUser4Gift << endl;
    cout << "User 5 Gift: " << strUser5Gift << endl;
    cout << "User 6 Gift: " << strUser6Gift << endl;
    cout << user1Gift << user2Gift << user3Gift << user4Gift << user5Gift << user6Gift;
}

bool giftCheck() { 
    if (
    ((gift1Taken) && (gift2Taken) && (gift3Taken) && (gift4Taken) && (gift5Taken) && (gift6Taken)) &&
    (user1Gift != 0) && (user2Gift != 0) && (user3Gift != 0) && (user4Gift != 0) && (user5Gift != 0) && (user6Gift != 0)
    ) {
        return true;
    }
    else {
        return false;
    }
}