// C++ code to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;

void printDialog(const std::string& name, const std::string& sentence) {
    cout << name << " says:\""<< sentence <<"\""<< endl;
}

int main()
{
    string name("Stas");
    string sentence("I'm acward and frustrated");
    printDialog(name, sentence); 
    return 0;
}