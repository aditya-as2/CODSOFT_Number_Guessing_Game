#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|   - Welcome to Number Guessing Game -   |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;

m:

    srand(time(0));
    int num = rand() % 100, gNum = -1, gCount = 1;
    cout << "\n\t\t\t\t\tGuess no.: " << gCount << "\n";
    cout << "\n\t\t\t\t\tEnter a number to guess: ";
    cin >> gNum;
    cout << "\n\t\t\t\t-------------------------------------------"
         << endl;

    while (gNum != num)
    {
        gCount++;
        cout << "\n\t\t\t\t    Guess no.: " << gCount << "\n";

        if (gNum > num)
        {
            cout << "\n\t\t\t\t    Enter a smaller number than " << gNum << ": ";
        }
        else if (gNum < num)
        {
            cout << "\n\t\t\t\t    Enter a greater number than " << gNum << ": ";
        }
        cin >> gNum;
        cout << "\n\t\t\t\t-------------------------------------------"
             << endl;
    }
    if (gNum == num)
    {
        cout << "\t\t\t\t|                                         |" << endl;
        cout << "\t\t\t\t|   Kudos you guessed the right number!   |" << endl;
        cout << "\t\t\t\t|            You took " << gCount << " guesses.          |" << endl;
        cout << "\t\t\t\t|            The number was " << gNum << ".           |" << endl;
        cout << "\t\t\t\t|                                         |" << endl;
        // cout << "\t\t\t\t-------------------------------------------\n\n"
        // << endl;
    }
n:

    int decision;

    cout << "\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|               1) Play again             |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t|               2) Exit                   |" << endl;
    cout << "\t\t\t\t|                                         |" << endl;
    cout << "\t\t\t\t-------------------------------------------" << endl;

    cout << "\n\t\t\t\tEnter your choice: ";
    cin >> decision;
    cout << "\n\t\t\t\t-------------------------------------------" << endl;

    switch (decision)
    {
    case 1:
        goto m;
        break;
    case 2:
        cout << "\n";
        return 0;
    default:
        cout << "\n\t\t\t\tPlease enter a valid choice!\n\n";
        goto n;
    }
    return 0;
}