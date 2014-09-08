/*
 * File:   main.cpp
 * Author: kirankotresh
 *
 * Created on 27 August 2014, 12:27
 */

#include <vector>
#include <iostream>

using namespace std;

template<typename T>
void dutch_flag_partition(vector<T> &A, const int &pivot_index) {
    T pivot = A[pivot_index];
    int smaller = 0, equal = 0, larger = A.size() - 1;
    while (equal <= larger) {
        if (A[equal] < pivot)
            swap(A[smaller++], A[equal++]);
        else if (A[equal] == pivot)
            ++equal;
        else if (A[equal] > pivot)
            swap(A[equal], A[larger--]);
    }
}

int main(int argc, char** argv) {

    vector<int> test;

   

    test.push_back(5);
    test.push_back(4);
    test.push_back(3);
    test.push_back(1);
    test.push_back(6);
    test.push_back(0);

    int index = 2;
    std::vector<int>::const_iterator itr;

    cout << "BEFORE:  ";

    for (itr = test.begin(); itr != test.end(); itr++) {
        cout << *itr << "\t";
    }

    cout << "\nAFTER:   ";
    dutch_flag_partition(test, index);

    for (itr = test.begin(); itr != test.end(); itr++) {
        cout << *itr << "\t";
    }

    return 0;
}

