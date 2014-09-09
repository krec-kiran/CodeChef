/*
 * File:   main.cpp
 * Author: kirankotresh
 *
 * Created on 27 August 2014, 15:00
 */

#include <iostream>

using namespace std;

class Complex {
    int m_x;
    int m_y;
public:

    Complex(int _x, int _y) : m_x(_x), m_y(_y) {

    }
    Complex& operator+(Complex& _rhs);
    Complex& operator+(Complex* _rhs);
    void getComplex();
};

Complex& Complex::operator+(Complex &rhs) {
    this->m_x += rhs.m_x;
    this->m_y += rhs.m_y;
}

Complex& Complex::operator+(Complex* rhs) {
    this->m_x += rhs->m_x;
    this->m_y += rhs->m_y;
}

void Complex::getComplex() {
    cout << this->m_x << "\t" << endl;
    cout << this->m_y << endl;

}

int main(int argc, char** argv) {

    Complex comp(100, 200), comp2(500, 600);

    Complex* comp3 = new Complex(500, 900);

    comp + comp3;

    comp.getComplex();

    comp + comp2;

    comp.getComplex();
    
    shared_ptr<Complex> comps(new Complex(500,700));
    
    cout << " GET COMPLEX";
    comps->getComplex();
    

    return 0;
}

