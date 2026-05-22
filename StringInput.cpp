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
        cout << "Loop "+ to_string(i+1) << endl; //Shows loop number
        cout << "Input String 1:"; //Prompt for string input
        
        //getline used to allow for spaces in the string input
        if(!getline(cin, str1)) {break;}
        if (str1.empty()) {
            cout << "Error: Empty value" << endl;
            continue;
        } 

        cout << "Input String 2:"; //Prompt for string input
        if(!getline(cin, str2)) {break;}
        if (str2.empty()){
            cout <<" Error: Empty value" << endl;
            continue;
        }
        string str3 = str1 + " " + str2; //Concatenates the two strings with a space in between
        cout << str3 << endl; //Prints the concatenated string to the screen

    }
}