#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    int guess = 0;
    cout << "Guess the number (between 1 and 100): ";

    while (true)
    {
        cin >> guess;

        if (guess < randomNumber)
        {
            cout << "Too low! Try again: ";
        }
        else if (guess > randomNumber)
        {
            cout << "Too high! Try again: ";
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            break;
        }
    }

    return 0;
}
