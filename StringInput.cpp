/*
 * Program takes two string inputs from a user. It concatenates the two strings an then 
 * prints the resulting output to the screen.Takes two string inputs from the user 3 times
 * for varying string lengths.
 * github StringInputConsoleApp
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string one,two;
    cout << "Input one:";
    cin >> one;
    cout << "Input two:";
    cin >> two;
    string both = one + " " + two;
    cout << both;
}