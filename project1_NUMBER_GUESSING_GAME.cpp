#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    srand(time(0));  // seed with system time
    int usernumber;
    int randomNumber = rand() % 100 + 1;  // range 1 to 100

    
    cout << "input your guess number between 1 to 100:" << endl; // this will show msg to user
    cin >> usernumber; // it is used to get a guess number from user

    //checking for valid or invalid entry given by user
    if(usernumber > 0 & usernumber < 101){
        cout << "valid entry" << endl;
    }
    else{
        cout << "invalid entry" << endl;
    }

    //comparing the number
    if(usernumber == randomNumber){
        cout << "correct!! u guessed the right number." << endl;
    }
    else if(usernumber < randomNumber){
        cout << "Too low!! try a higher number." << endl;
    }
    else{
        cout << "Too high!! try a lower number." << endl;
    }
    
    //printing random number taken by the system
    cout << "Random number between 1 and 100: " << randomNumber << endl; // this will print random number between 1 to 100 by the system
    return 0;
}
