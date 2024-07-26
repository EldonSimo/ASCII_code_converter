#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char newValue;
    

    cout << "Enter your character: ";
    cin >> newValue;

    cout << "Assigned ASCII code is: " << int(newValue) << "\n";
    
    char enterKey = '\n';
    cout << "Press any key to exit..." << endl;
    _getch();
    
    return 0;
}