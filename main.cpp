// FED4 XO'JAMNAZAROV DOSTONBEK 230371
// DATE: 27.03.2024
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    cout << "PROBLEM 1\n";
    float consumption, bill;
    cin >> consumption;
    switch ((consumption <=30) ? 1 : (consumption > 30 && consumption <= 50) ? 2 : (consumption >
    50 && consumption <=60) ? 3 : (consumption > 60) ? 4 : 0) {
        case 1:
            bill = 13 + consumption * 0.4;
            cout << bill << endl << endl;
            break;
        case 2:
            consumption -= 30;
            bill = 13 + 30 * 0.4 + consumption * 0.12;
            cout << bill << endl << endl;
            break;
        case 3:
            consumption -=50;
            bill = 13 + 30 * 0.4 + 20 * 0.12 + consumption * 1.4;
            cout << bill << endl << endl;
            break;
        case 4:
            consumption -=60;
            bill = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + consumption * 1.5;
            cout << bill << endl << endl;
            break;
        case 0:
            cout << "Invalid input." << endl << endl;
    }

    cout << "PROBLEM 2\n";
    float a2,b2,c2;
    cin >> a2 >> b2 >> c2;
    switch ((a2 > b2 && a2 > c2) ? 1 : (b2 > a2 && b2 > c2) ? 2 : (c2 > a2 && c2 > b2) ? 3 : 0) {
        case 1:
            cout << "The maximum number is" << ' ' << a2 << endl << endl;
            break;
        case 2:
            cout << "The maximum number is" << ' ' << b2 << endl << endl;
            break;
        case 3:
            cout << "The maximum number is" << ' ' << c2 << endl << endl;
            break;
    }

    cout << "PROBLEM 3\n";
    char gender;
    float height;
    cin >> gender >> height;
    switch ((gender == 'M' && height < 1.70) ? 1 : (gender == 'M' && height >= 1.70 && height < 1.85) ? 2 : (gender == 'M' && height >= 1.85) ? 3 :0) {
        case 1:
            cout << "Short" << endl << endl;
            break;
        case 2:
            cout << "Normal" << endl << endl;
            break;
        case 3:
            cout << "Tall" << endl << endl;
            break;
    }
    switch ((gender == 'F' && height < 1.60) ? 1 : (gender == 'F' && height >= 1.60 && height < 1.75) ? 2 : (gender == 'F' && height >= 1.75) ? 3 :0) {
        case 1:
            cout << "Short" << endl << endl;
            break;
        case 2:
            cout << "Normal" << endl << endl;
            break;
        case 3:
            cout << "Tall" << endl << endl;
            break;
    }


    cout << "PROBLEM 4\n";
    int firstOctet;
    string macAddress; // String is a datatype for sequence of characters

    cin >> macAddress; // Read the sequence of characters from input into macAdress

    std::istringstream ss(macAddress); // convert string to a special data type for hex
    ss >> std::hex >> firstOctet; // write first octet into firstOctet variable

    // write your code for problem 4 here...
    if (firstOctet == 255) {
        cout << "Broadcast" << endl << endl;
    } else if (firstOctet % 2 == 0) {
        cout << "Unicast" << endl << endl;
    } else {
        cout << "Multicast" << endl << endl;
    }

    cout << "PROBLEM 5\n";
    // write your code for problem 5 here...
    char operation;
    float a5, b5;
    cin >> a5 >> operation >> b5;
    switch (operation) {
        case '+':
            cout << a5 + b5 << endl << endl;
            break;
        case '-':
            cout << a5 - b5 << endl << endl;
            break;
        case '*':
            cout << a5 * b5 << endl << endl;
            break;
        case '/':
            cout << a5 / b5 << endl << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }

    return 0;
}