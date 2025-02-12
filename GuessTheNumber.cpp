#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printWelcomeMessage() {
    cout <<"Welcome to Number guesser" << endl;
    cout << "I'm Thinking of a number between 1-1000." << endl;
    cout << "Can you try and Guess what the number i am thinking of is?" << endl;
    cout << "Good luck :)" << endl;
}

int getPlayerGuess() {
    int guess;
    cout << "Enter youre number to take a guess : ";
    cin >> guess;
    return guess;
}

void giveFeedback(int guess, int target) {
    if (guess < target) {
        cout << "You're guess was too low, how about you try again!" << endl;
    } else if (guess > target) {
        cout << "Youre Guess was too high, How about you try again but lower this time!" << endl;
    } else {
        cout << "Welldone!! You have guessed the correct number, i am impressed!" << endl;
    }
}

int main() {
    srand(time(0));
    
    int targetNumber = rand() % 100 + 1;
    
    int attempts = 0;
    int guess = 0;
    
    printWelcomeMessage();
    
    while (guess != targetNumber) {
        guess = getPlayerGuess();
        attempts++;
        giveFeedback(guess, targetNumber);
    }
    
    cout << "You have guessed the number in " << attempts << " attempts :) Well done." << endl;
    
    return 0;
}
