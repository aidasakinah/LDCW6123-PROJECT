#include <iostream>
#include <string>

using namespace std;

//this is to show the menu
void showMenu()
{
    int choice;

    //display the options
    cout << "\n==========================\n";
    cout << " Welcome to AI Wonderland\n";
    cout << "==========================\n";

    cout << "Please select your adventure:\n";
    cout << "1. What is Artificial Intelligence?\n";
    cout << "2. How does AI work?\n";
    cout << "3. What are the applications of AI?\n";
    cout << "4. What are the challenges of AI?\n";
    cout << "5. What is the future of AI?\n";
    cout << "6. Exit\n";
    cout << "==========================\n";

    // Prompt the user for their choice
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    cin.ignore(); // Clear the newline character from the input buffer

}

int main ()
{
    showMenu();
}