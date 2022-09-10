/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 6, 2022, 10:31 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int numberOfDays(int month, int year){
    if(month == 2){
        if((year%100 == 0) && (year%400 == 0)) return 29;
        else if ((year%100 != 0) && (year%4 ==0)) return 29;
       
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8) return 31;
    else return 30;
}
int main(int argc, char** argv) {
    int month;
    int year;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    int numDays = numberOfDays(month, year);
    cout << numDays << " days";
    
    
    return 0;
}



