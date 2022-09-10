/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 7, 2022, 10:57 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
float celsiusConv(float fahrenheit){
    return (fahrenheit - 32.0)*(5.0/9.0);
}
int main(int argc, char** argv) {
    float test;
    cout<< "Fahrenheit To Celsius Conversion for 1 to 20 Degrees Fahrenheit"<< "\n";
    for(float i = 0; i <= 20; i++){
        test = celsiusConv(i);
        cout<<"Fahrenheit @ " << i << " degrees equals " << test << " Celsius" << "\n";
    }
    return 0;
}

