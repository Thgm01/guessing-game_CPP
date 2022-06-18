#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //header
    cout << "******************************************" << endl;
    cout << "***    Welcome to the Guessing Game!   ***" << endl;
    cout << "******************************************" << endl;

    cout << "Choose the difficulty: \n";
    cout << "Easy (E)     Normal (N)     Hard(H)\n";

    char difficulty;
    cin >> difficulty;

    int total_of_attempts;

    if(difficulty == 'E') total_of_attempts = 15;
    else if(difficulty == 'N') total_of_attempts = 10;
    else total_of_attempts = 5;


    srand(time(NULL));
    const int SECRET_NUMBER = rand()%100; 
 
    float pontuation = 1000.0;

    int attempt;

    bool win = false;

    for(attempt = 1; attempt <= total_of_attempts; attempt++)
    {
        int guess;
        cout << "Attempt: " << attempt << endl << endl;
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
            win = true; 
            break;
                 
        }
    }
    cout << "End game!" << endl;

    if(!win)
    {
        cout << "You lost the game! Try again!\n";
    }else
    {
    cout << "You won in " << attempt << (attempt>1 ? " Attempts!" : " Attempt!") << endl;

    cout.precision(2);
    cout << fixed;
    cout << "Your Score was: " << pontuation << (pontuation>1 ? " Points!" : " Point!") << endl; 

    }

}