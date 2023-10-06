#include <iostream>
#include <string>

using namespace std;

void pause() {
    cout << "\nPress Enter to continue...";
    cin.get();
}

int main() {
    string name;
    string choice;

    cout << "Welcome to the Interactive Story!" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    // Introduction
    cout << "\nHello, " << name << "! You find yourself at a crossroad in the forest." << endl;
    cout << "You have two paths to choose from: 'left' or 'right'." << endl;
    cout << "Which path will you take? ";
    getline(cin, choice);

    if (choice == "left") {
        // Left path
        cout << "\nYou chose the left path and found an old cabin." << endl;
        cout << "Inside the cabin, you discover a hidden treasure map." << endl;
        cout << "Will you follow the map ('follow') or continue your journey ('continue')? ";
        getline(cin, choice);

        if (choice == "follow") {
            // Follow the map
            cout << "\nYou decide to follow the map's clues." << endl;
            // Add more story content and choices here...
        } else if (choice == "continue") {
            // Continue your journey
            cout << "\nYou leave the cabin and continue your journey." << endl;
            // Add more story content and choices here...
        } else {
            // Invalid choice
            cout << "\nInvalid choice. You're paralyzed by indecision." << endl;
        }
    } else if (choice == "right") {
        // Right path
        cout << "\nYou chose the right path and encountered a mystical waterfall." << endl;
        cout << "You notice a hidden cave behind the waterfall." << endl;
        cout << "Do you want to explore the cave ('explore') or avoid it ('avoid')? ";
        getline(cin, choice);

        if (choice == "explore") {
            // Explore the cave
            cout << "\nYou enter the cave and find a chest filled with ancient artifacts." << endl;
            // Add more story content and choices here...
        } else if (choice == "avoid") {
            // Avoid the cave
            cout << "\nYou decide not to risk it and continue your journey." << endl;
            // Add more story content and choices here...
        } else {
            // Invalid choice
            cout << "\nInvalid choice. Fear holds you back." << endl;
        }
    } else {
        // Invalid choice
        cout << "\nInvalid choice. You're paralyzed by indecision." << endl;
    }

    // End of the story
    cout << "\nThanks for playing, " << name << "! Goodbye." << endl;

    return 0;
}
