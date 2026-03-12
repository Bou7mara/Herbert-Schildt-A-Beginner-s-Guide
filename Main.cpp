#include <iostream>
using namespace std;
int main() {
    cout << "Project 2-1" << endl;
    double distance = 34000000.0, lightspeed = 186000.0;
    double delay = distance/lightspeed;
    cout << "In seconds (s), the delay is: " << delay << "\nAnd in minutes, it is: " << delay/60 << "\n\n";

    cout << "Project 2-2" << endl;
    bool p, q, XOR;
    p = true;
    q = false;
    if ((p||q)&&(!(p&&q))) XOR = true;
    else XOR = false;
    cout << XOR << endl;
}
