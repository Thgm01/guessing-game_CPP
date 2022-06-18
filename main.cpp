#include <iostream>
using namespace std;

int main()
{
    //header
    cout << "******************************************" << endl;
    cout << "***    Welcome to the Guessing Game!   ***" << endl;
    cout << "******************************************" << endl;

    int secret_number = 42;

    int guess;
    cout << "What is your guess: ";
    cin >> guess;
    
    if(guess > secret_number)
    {
        cout << "Your guess was greater that the secret number!\n";
    }
    else if(guess < secret_number)
    {
        cout << "Your guess was less that the secret number!\n";
    }
    else
    {
        cout << "Congratulations! You got it rignt!\n";        
    }
}