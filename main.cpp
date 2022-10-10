#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand((unsigned) time(NULL));

    int randNumber = rand() % 100 + 1;
    int userChoice, attempts = 0;

    cout << "Guess the number (1 to 100): " << endl;

    while (userChoice != randNumber){

        attempts++;
        cin >> userChoice;

        if(userChoice == randNumber){
            cout << "Correct! You have used " << attempts << " guess[es]";
        } else if (userChoice > randNumber){
            cout << "Your attempt is greater than the secret number. Try again!" << endl;
        } else {
            cout << "Your attempt is less than the secret number. Try again!" << endl;
        }

    }

    return 0;
}
