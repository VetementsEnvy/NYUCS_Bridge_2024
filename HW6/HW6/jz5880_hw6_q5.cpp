#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lastname, firstname, middlename;
    cout << "please enter you full name: ";
    cin >> firstname >> middlename >> lastname;
    cout << lastname << ", " << firstname << " " << middlename[0] << "."
         << endl;
    return 0;
}
