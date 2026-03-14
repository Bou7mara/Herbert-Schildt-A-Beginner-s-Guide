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
    cout << "Test bodyless \n";
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= 5; factorial *= i, sum += i++);
    cout << sum << "\n" << factorial;

}
