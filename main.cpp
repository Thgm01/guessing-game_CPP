#include <iostream>
using namespace std;

int main()
{
    //header
    cout << "******************************************" << endl;
    cout << "***    Welcome to the Guessing Game!   ***" << endl;
    cout << "******************************************" << endl;

    const int SECRET_NUMBER = 42; 

    bool win = false;
    int attempts = 0;

    float pontuation = 1000.0;

    do
    {
        attempts++;

        int guess;
        cout << "Attempt: " << attempts << endl << endl;
        cout << "What is your guess: ";
        cin >> guess;

        float lost_points = abs(guess - SECRET_NUMBER)/2.0;
        pontuation -= lost_points;
        
        bool greater = guess > SECRET_NUMBER;
        bool less = guess < SECRET_NUMBER;
        
        if(greater)
        {
            cout << "Your guess was GREATER that the secret number!\n";
        }
        else if(less)
        {
            cout << "Your guess was LESS that the secret number!\n";
        }
        else
        {
            cout << "Congratulations! You got it rignt!\n";  
            win = 1; 
                 
        }
    }while(!win);
    cout << "End game!" << endl;
    cout << "You won in " << attempts << (attempts>1 ? " Attempts!" : " Attempt!") << endl;

    cout.precision(2);
    cout << fixed;
    cout << "Your Score was: " << pontuation << (pontuation>1 ? " Points!" : " Point!") << endl; 
}