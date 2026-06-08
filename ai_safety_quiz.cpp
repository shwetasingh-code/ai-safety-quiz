#include <iostream>  
using namespace std;

int main() {

    char answer;      // Store user's answer from taking user
    int score = 0;    // Store quiz score

   
    cout << "=================================\n";
    cout << "       AI SAFETY QUIZ\n";
    cout << "=================================\n\n";

    // Question 1
    cout << "Q1. What does AI stand for?\n";
    cout << "A. Artificial Intelligence\n";
    cout << "B. Automatic Internet\n";
    cout << "C. Artificial Internet\n";
    cout << "D. Advanced Information\n";

    cout << "Enter your answer: ";
    cin >> answer;

    // Check the answer correct or not
    if(answer == 'A' || answer == 'a'){
        cout << "Correct!\n\n";
        score++; // Add 1 point
    }
    else{
        cout << "Wrong! Correct answer is A.\n\n";
    }

    // Question 2
    cout << "Q2. Why is AI Safety important?\n";
    cout << "A. To make AI safe for people\n";
    cout << "B. To make AI colorful\n";
    cout << "C. To make computers bigger\n";
    cout << "D. None of these\n";

    cout << "Enter your answer: ";
    cin >> answer;

    // Check the answer
    if(answer == 'A' || answer == 'a'){
        cout << "Correct!\n\n";
        score++;
    }
    else{
        cout << "Wrong! Correct answer is A.\n\n";
    }

    // Question 3
    cout << "Q3. Which of the following is a potential AI Safety risk?\n";
    cout << "A. AI generating misinformation \n";
    cout << "B. AI having too little data\n";
    cout << "C. AI being open source\n";
    cout << "D. AI using electricity\n";

    cout << "Enter your answer: ";
    cin >> answer;

    // Check the answer
    if(answer == 'A' ||answer == 'a'){
        cout << "Correct!\n\n";
        score++;
    }
    else{
        cout << "Wrong! Correct answer is A.\n\n";
    }

    // return final score
    cout << "=================================\n";
    cout << "Quiz Completed!\n";
    cout << "Your Score: " << score << "/3\n";

    // Display result message
    if(score == 3){
        cout << "Excellent! AI Safety Champion.\n";
    }
    else if(score >= 2){
        cout << "Good Job! Keep Learning.\n";
    }
    else{
        cout << "Keep Practicing.\n";
    }

    cout << "=================================\n";

    return 0; // End of program
}
