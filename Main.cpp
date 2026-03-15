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

    // char choice;
    //
    // do {
    //     // inner loop for validating input
    //     do {
    //         cout << "\nSup boss, whatchu need help wiv??\n";
    //         cout << "a) if\n";
    //         cout << "b) switch\n";
    //         cout << "c) for\n";
    //         cout << "d) while\n";
    //         cout << "e) do-while\n";
    //         cout << "f) break\n";
    //         cout << "g) continue\n";
    //         cout << "h) goto\n";
    //         cout << "q) quit\n";
    //         cout << "make your choice wisely: ";
    //
    //         cin >> choice;
    //
    //         if(choice!='a' && choice!='b' && choice!='c' && choice!='d' &&
    //            choice!='e' && choice!='f' && choice!='g' && choice!='h' &&
    //            choice!='q') {
    //             cout << "\nBruh, that's not a valid choice. Try again.\n";
    //         }
    //
    //     } while(choice!='a' && choice!='b' && choice!='c' && choice!='d' &&
    //             choice!='e' && choice!='f' && choice!='g' && choice!='h' &&
    //             choice!='q');
    //
    //     if(choice == 'q') break;
    //
    //     cout << "\n";
    //
    //     switch(choice) {
    //         case 'a':
    //             cout << "if statement syntax:\n\n";
    //             cout << "if(condition)\n    statement;\n";
    //             cout << "else\n    statement;\n";
    //             break;
    //
    //         case 'b':
    //             cout << "switch statement syntax:\n\n";
    //             cout << "switch(expression) {\n";
    //             cout << "    case constant:\n";
    //             cout << "        statement sequence\n";
    //             cout << "        break;\n";
    //             cout << "    // ... more cases\n";
    //             cout << "}\n";
    //             break;
    //
    //         case 'c':
    //             cout << "for loop syntax:\n\n";
    //             cout << "for(initialization; condition; update) {\n";
    //             cout << "    statement;\n";
    //             cout << "}\n";
    //             break;
    //
    //         case 'd':
    //             cout << "while loop syntax:\n\n";
    //             cout << "while(condition) {\n";
    //             cout << "    statement;\n";
    //             cout << "}\n";
    //             break;
    //
    //         case 'e':
    //             cout << "do-while loop syntax:\n\n";
    //             cout << "do {\n";
    //             cout << "    statement;\n";
    //             cout << "} while(condition);\n";
    //             break;
    //
    //         case 'f':
    //             cout << "break statement syntax:\n\n";
    //             cout << "break;\n";
    //             break;
    //
    //         case 'g':
    //             cout << "continue statement syntax:\n\n";
    //             cout << "continue;\n";
    //             break;
    //
    //         case 'h':
    //             cout << "goto statement syntax:\n\n";
    //             cout << "goto label;\n";
    //             cout << "...\n";
    //             cout << "label:\n";
    //             cout << "    statement;\n";
    //             break;
    //     }
    //
    // } while(choice != 'q');
    //
    // cout << "\nExiting help system. Later boss.\n";

    // int periods = 0;
    // char ch;
    //
    // cout << "Type characters ($ to stop):\n";
    //
    // while (cin.get(ch) && ch != '$') {
    //     if (ch == '.') {
    //         ++periods;
    //     }
    // }
    //
    // std::cout << "Number of periods: " << periods << '\n';
    char ch;
    int count = 0;

    do {
        cin >> ch;

        switch(ch) {
            case '.':
                count++;
                break;

            case '$':
                break;

            default:
                break;
        }

    } while(ch != '$');

    cout << "Total number of periods: " << count << endl;
}
