/* 
 * File:   main.cpp 
 * Author: kirankotresh
 *
 * offsetrun program
 * 
 * Created on 04 September 2014, 08:12
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string input;

    cout << "Enter the string" << endl;
    cin >> input;

    cout << "The offset runs are: " << "\t";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == input[i + 1]) {
            cout << i << "\t";
            while (input[i] == input[i + 1])
                i++;
        }

    }

}

