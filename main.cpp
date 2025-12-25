#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int choice, max;
    cout << "Select Difficulty Level:\n";
    cout << "1. Easy (1 to 50)\n";
    cout << "2. Medium (1 to 100)\n";
    cout << "3. Hard (1 to 500)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            max = 50;
            break;
        case 2:
            max = 100;
            break;
        case 3:
            max = 500;
            break;
        default:
            cout << "Invalid choice! Defaulting to Medium.\n";
            max = 100;
    }

    int secretNumber = rand() % max + 1;
    int guess, attempts = 0;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber)
            cout << "Too high!\n";
        else if (guess < secretNumber)
            cout << "Too low!\n";
        else
            cout << "Correct!\n";

    } while (guess != secretNumber);

    cout << "You guessed the number in " << attempts << " attempts.\n";
    return 0;
}
