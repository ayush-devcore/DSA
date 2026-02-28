#include <iostream>
using namespace std;

int main() {
    string name,year;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter year of study: ";
    cin >> year;

    cout << "\nIntroduction:\n";
    cout << "My name is " << name << " and I am in " << year << " year of my study.";

    return 0;
}
