#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // cout << "Project 2-1" << endl;
    // double distance = 34000000.0, lightspeed = 186000.0;
    // double delay = distance/lightspeed;
    // cout << "In seconds (s), the delay is: " << delay << "\nAnd in minutes, it is: " << delay/60 << "\n\n";
    //
    // cout << "Project 2-2" << endl;
    // bool p, q, XOR;
    // p = true;
    // q = false;
    // if ((p||q)&&(!(p&&q))) XOR = true;
    // else XOR = false;
    // cout << XOR << "\n\n";

    // cout << "Project 2-3" << endl;
    // double principal;
    // double intRate;
    // int payPerYear;
    // int numYears;
    // double payment;

    // cout << "Enter loan principal: ";
    // cin >> principal;
    //
    // cout << "Enter annual interest rate (decimal): ";
    // cin >> intRate;
    //
    // cout << "Enter number of payments per year: ";
    // cin >> payPerYear;
    //
    // cout << "Enter number of years: ";
    // cin >> numYears;
    //
    // payment = (intRate * (principal / payPerYear)) /
    //           (1 - pow((intRate / payPerYear) + 1, -payPerYear * numYears));
    //
    // cout << "Regular payment: " << payment << "\n\n";

    // for(int num = 2; num <= 100; num++) {
    //     bool isPrime = true;
    //
    //     for(int i = 2; i <= num / 2; i++) {
    //         if(num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //
    //     if(isPrime) {
    //         cout << num << " ";
    //     }
    // }
    char choice;

    do {
        cout << "Sup boss, whatchu need help wiv??\n";
        cout << "a) if.\n";
        cout << "b) switch.\n";
        cout << "c) for.\n";
        cout << "d) while.\n";
        cout << "e) do-while.\n";
        cout << "make your choice wisely: ";
        cin >> choice;

        if(choice < 'a' || choice > 'e') {
            cout << "\nBruh, that's not a valid choice. Try again.\n\n";
        }

    } while(choice < 'a' || choice > 'e');

    switch(choice) {
        case 'a':
            cout << "\nAn if statement's syntax is:\n\n";
            cout << "if(condition)\n    statement;\n";
            cout << "else\n    statement;\n";
            break;

        case 'b':
            cout << "\nA switch statement's syntax is:\n\n";
            cout << "switch(expression) {\n";
            cout << "    case constant:\n";
            cout << "        statement sequence\n";
            cout << "        break;\n";
            cout << "    // ... more cases\n";
            cout << "}\n";
            break;

        case 'c':
            cout << "\nA for loop's syntax is:\n\n";
            cout << "for(initialization; condition; update) {\n";
            cout << "    statement;\n";
            cout << "}\n";
            break;

        case 'd':
            cout << "\nA while loop's syntax is:\n\n";
            cout << "while(condition) {\n";
            cout << "    statement;\n";
            cout << "}\n";
            break;

        case 'e':
            cout << "\nA do-while loop's syntax is:\n\n";
            cout << "do {\n";
            cout << "    statement;\n";
            cout << "} while(condition);\n";
            break;
    }


}
