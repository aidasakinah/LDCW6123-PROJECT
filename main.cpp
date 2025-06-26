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
    cout << "6. What are ethical considerations in AI?\n";
    cout << "7. Exit\n";
    cout << "==========================\n";

}

// Function to explain what Artificial Intelligence is
void explainWhatIsAI()
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nWhat is Artificial Intelligence?\n\033[0m";
    cout << "Artificial Intelligence (AI) is a branch of computer science focused on building smart machines\n";
    cout << "that can perform tasks that typically require human intelligence.\n";
    cout << "These tasks include learning, reasoning, problem-solving, understanding language, and perception.\n";
    cout << "AI combines algorithms, data, and computing power to mimic human cognitive functions in machines.\n";
}

//function to explain how AI works
void explainHowAIWorks(int choice)
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the console and move cursor to top-left
    cout << "\033[1m\nHow AI Works:\n\033[0m";
    cout << "Artificial Intelligence (AI) works by simulating human intelligence processes through algorithms and computational models.\n";
    cout << "It involves machine learning, where systems learn from data, and deep learning, which uses neural networks to analyze complex patterns.\n";
    cout << "AI systems can process vast amounts of information, recognize patterns, and make decisions based on learned experiences.\n";
}

// Function to explain the applications of AI
void explainApplicationsOfAI()
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nApplications of Artificial Intelligence:\n\033[0m";
    cout << "1. Healthcare: AI helps doctors detect diseases, analyze medical data, and assist in surgeries.\n";
    cout << "2. Transportation: Self-driving cars use AI to drive safely and avoid obstacles.\n";
    cout << "3. Finance: AI is used to detect fraud, manage investments, and automate trading.\n";
    cout << "4. Education: AI gives personalized learning, grading assistance, and tutoring support.\n";
    cout << "5. Retail: Online stores use AI for product recommendations and managing stock.\n";
    cout << "6. Entertainment: AI creates music, suggests movies, and powers video game characters.\n";
    cout << "7. Customer Service: Chatbots and virtual assistants answer questions 24/7.\n";
}

int main ()
{
    int choice;
    
    //displays the menu first
    showMenu();

    // Prompt the user for their choice
    cout << "Enter your choice (1-7): ";
    cin >> choice;
    cin.ignore(); // Clear the newline character from the input buffer

    switch (choice)
    {
    case 1:
        explainWhatIsAI();
        break;
    case 2:
        explainHowAIWorks(choice);
        break;
    case 3:
        explainApplicationsOfAI();
        break;

    default:
        cout << "Invalid choice. Please select a valid option.\n";
        break;
    }

    return 0;
}
