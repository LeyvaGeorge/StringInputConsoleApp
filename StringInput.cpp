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
    int times = 3; //Qty to loop the application
    string str1,str2;
    for (int i = 0; i < times; i++) {
        cout << "Loop "+ to_string(i+1) << endl;
        cout << "Input String 1:";
        cin >> str1;
        cout << "Input String 2:";
        cin >> str2;
        string both = str1 + " " + str2;
        cout << both << endl;

    }
}