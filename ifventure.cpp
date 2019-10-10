#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to a haunted maze. Please enter." << endl;

  // R1
  cout << "You enter the maze and the corridor splits. Which way do you choose to go?";
  cout << "\n1. Left \n2. Right" << endl;
  int answerQuestion1;
  cin >> answerQuestion1;
  switch (answerQuestion1) {
    case 1: {
      // R2
      cout << "You decide to make a left. There is a light switch. Do you choose to turn the light on and explore the room, or do you rush past?" << endl;
      cout << "\n1. Turn the light on and explore.\n2. Rush past.";
      int answerQuestion2_1;
      cin >> answerQuestion2_1;
      if (answerQuestion2_1 == 1) {
        // R4
        cout << "You decide to turn the light on. You see a man with a large knife in his stomach, bleeding on the floor. He calls to you. Do you try to help him survive or take the knife out to use it for yourself?";
        cout << "1. Help\n2. Take knife" << endl;
        int answerQuestion3_1;
        cin >> answerQuestion3_1;
        if (answerQuestion3_1 == 1) {
          // E1
          cout << "You decide to help the poor man. He struggles to stand up. You open the door and start to walk out, supporting him all the way through. You walk down a long hallway, finally reaching the exit. Congratulations!";
        }
        else if (answerQuestion3_1 == 2) {
          // E2
          cout << "You decide to take the knife from the man to defend yourself. He curses you and dies. Three big clowns run at you out of nowhere, and you get swarmed. They take the knife, stab you with it, and bite your head off. You died. The End.";
        }
        else {
          cout << "Invalid." << endl;
        }
      }
      else if (answerQuestion2_1 == 2) {
        // R5
        cout << "You decide to rush past the room without turning the light on. The door leads to another long hallway, but this time, there is a clown staring at you at the end of the hallway. Somewhat close to you, there is a door, slightly ajar. You don't know what lies wait in there for you. Do you face the clown, or run into the room?" << endl;
        cout << "1. Face the clown\n2. Run into the room" << endl;
        int answerQuestion3_2;
        cin >> answerQuestion3_2;
        if (answerQuestion3_2 == 1) {
          // E3
          cout << "You decide to face off with the clown. You start running at each other. He reaches you first and grabs you. Just as you think you are about to die, he gives you a hug and leads you out. The End.";
        }
        else if (answerQuestion3_2 == 2) {
          // E4
          cout << "You run into the room. It is dark. Suddenly, the clown appears behind you and stabs you in the back. The End.";
        }
        else {
          cout << "Invalid" << endl;
        }
      }
      else {
        cout << "Invalid." << endl;
      }
      break;
    }
    case 2: {
      // R3
      cout << "You decide to make a right. You find yourself in a dark room full of a random assortment of things. There, you see the outline of a man. He starts to walk his way towards you. You see a door behind him. Do you try to fight your way to the door or run past him?" << endl;
      cout << "\n1. Fight\n2. Run" << endl;
      int answerQuestion2_2;
      cin >> answerQuestion2_2;
      if (answerQuestion2_2 == 1) {
        cout << "You decide to fight him. Luckily, he seems to be already injured, and you fend him off pretty easily. Do you pause to explore the room, or do you want to move on?";
        cout << "1. Pause to explore\n2. Move on" << endl;
        int answerQuestion3_3;
        cin >> answerQuestion3_3;
        if (answerQuestion3_3 == 1) {
          // E5
          cout << "You choose to explore the room. You see a pile of decapitated heads. Unbeknownst to you, the man regained consiousness and snuck up behind you, this time with a knife. He slits your throat, and adds your head to the pile. The End.";
        }
        else if (answerQuestion3_3 == 2) {
          // E6
          cout << "You choose to move on. You take the keys from the man and open the door. You reached the end. Congratulations! The End.";
        }
        else {
          cout << "Invalid." << endl;
        }
      }
      else if (answerQuestion2_2 == 2) {
        // R7
        cout << "You decide to run past him. Lucky for you, he isn't that fast. However, you find that the door is locked and he has the key. Do you want to fight him or jump out a window to find an alternate exit?";
        cout << "\n1. Fight\n2. Jump" << endl;
        int answerQuestion3_4;
        cin >> answerQuestion3_4;
        if (answerQuestion3_4 == 1) {
          // E7
          cout << "You decide to fight him. You beat him up pretty easily and walk out the door. The End.";
        }
        else if (answerQuestion3_4 == 2) {
          // E8
          cout << "You decide to jump out the window. Little did you know that you are six stories up. The fall easily kills you. The End.";
        }
        else {
          cout << "Invalid" << endl;
        }
      }
      else {
        cout << "Invalid." << endl;
      }
      break;    
    }
  default: cout << "Invalid" << endl;
  }
}