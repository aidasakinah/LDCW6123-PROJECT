#include <iostream>
#include <windows.h>
#include <string>
#include <unistd.h>

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

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
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

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
}

// Function to explain the applications of AI
void explainApplicationsOfAI()
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nApplications of Artificial Intelligence:\n\033[0m";
    cout << "1. Healthcare      : AI helps doctors detect diseases, analyze medical data, and assist in surgeries.\n";
    cout << "2. Transportation  : Self-driving cars use AI to drive safely and avoid obstacles.\n";
    cout << "3. Finance         : AI is used to detect fraud, manage investments, and automate trading.\n";
    cout << "4. Education       : AI gives personalized learning, grading assistance, and tutoring support.\n";
    cout << "5. Retail          : Online stores use AI for product recommendations and managing stock.\n";
    cout << "6. Entertainment   : AI creates music, suggests movies, and powers video game characters.\n";
    cout << "7. Customer Service: Chatbots and virtual assistants answer questions 24/7.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
}

// Function to explain the challenges of AI
void challengesofAI()
{
    // Clear screen for readability
    cout << "\033[2J\033[1;1H";
    
    // Title in bold
    cout << "\033[1m\nChallenges of Artificial Intelligence:\n\033[0m";

    // List of challenges using simple terms
    cout << "1. Bias        : AI can be unfair if trained with unfair data.\n";
    cout << "2. Privacy     : AI sometimes needs a lot of personal data.\n";
    cout << "3. Job loss    : AI might replace some human jobs.\n";
    cout << "4. High cost   : Building AI needs strong computers and money.\n";
    cout << "5. Security    : AI can be hacked or misused.\n";
    cout << "6. Trust       : People may not fully trust AI decisions.\n";
    cout << "7. Control     : Hard to control or stop powerful AI systems.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
}

// Function to explain the Future of AI
void explainFutureOfAI() {
    cout << "\n\033[1mFuture of AI:\033[0m\n";
    cout << "The future of Artificial Intelligence is expected to be increasingly transformative across all aspects of society.\n";
    cout << "AI will become more advanced and personalized, playing a key role in sectors like healthcare, education, transportation and smart cities.\n";
    cout << "We may see the development of Artificial General Intelligence (AGI), where machines can perform any intellectual task that a human can do.\n";
    cout << "As AI continues to evolve, it will likely reshape how we work, live and interact with technology, raising both opportunities and ethical challenges.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
}

// Function to explain the ethical considerations in AI
void explainEthicalConsiderations() 
{
    // Clear the console for better readability
    cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
    cout << "\033[1m\nEthical Considerations in Artificial Intelligence:\n\033[0m";
    cout << "1. Bias and Fairness     : AI systems can reflect or amplify societal biases if not trained properly.\n";
    cout << "2. Transparency          : Many AI systems are 'black boxes'—it's hard to understand how they make decisions.\n";
    cout << "3. Accountability        : It's often unclear who is responsible when AI makes a mistake.\n";
    cout << "4. Privacy               : AI may use large amounts of personal data, raising privacy concerns.\n";
    cout << "5. Consent               : Users may not always be aware their data is being used for AI.\n";
    cout << "6. Job Displacement      : Ethical concerns arise from AI replacing human workers.\n";
    cout << "7. Autonomous Decisions  : Self-driving cars and military drones raise questions about life-and-death decisions by machines.\n";

    int input;
    cout << "\nEnter 0 to return to the main menu: ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        cout << "Please enter 0 to return: ";
    }
}



int main ()
{
    int choice;
    
    do
    {
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
            case 4:
                challengesofAI();
                break;
            case 5:
                explainFutureOfAI();
                break;
            case 6:
                explainEthicalConsiderations();
                break;
            case 7:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
                sleep(3);
                break;
        }

    } while (choice != 7);

    return 0;
}
