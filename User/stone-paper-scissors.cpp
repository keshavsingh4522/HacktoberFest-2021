#include <iostream>
#include<ctime> 
// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';
 
using namespace std;
 
char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
 
char getUserOption() {
    char c;
    cout << "Welcome to Rock, Paper and Scissors Game!" << endl;
    cout << "Choose your option"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> c;
    
    while (c!='r' && c!='p' && c!='s' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }
 
    return c;
}
 
void showSelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}
 
void chooseWinner(char yourChoice, char compChoice) {
    if (yourChoice == ROCK && compChoice == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (yourChoice == PAPER && compChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (yourChoice == SCISSORS && compChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (yourChoice == ROCK && compChoice == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (yourChoice == PAPER && compChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (yourChoice == SCISSORS && compChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}
 
int main() {
    //User's choice
    char yourChoice; 
    //Compter's choice
    char compChoice;
    
    yourChoice = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedOption(yourChoice);
    
    cout << "Computer's choice is: "<< endl;
    compChoice = getComputerOption();
    showSelectedOption(compChoice);
    
    chooseWinner(yourChoice, compChoice);
 
    return 0;
}