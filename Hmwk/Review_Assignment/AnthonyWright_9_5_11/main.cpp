/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 10, 2022, 3:35 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int startPop;
    float avgDailyPop;
    int days;
    cout << "Please Enter the starting pop grater that 1 " ;
    cin >> startPop;
    cout << "Please Enter Daily Population grow rate ";
    cin >> avgDailyPop;
    cout << "Please Enter the amount of days to calculate ";
    cin >> days;
    if(days < 1 || avgDailyPop < 1 || startPop < 1){
        cout << " You entered invalid data all values must be larger than 1";
        return 1;
    }
    //change to percentage  
    avgDailyPop= avgDailyPop* .01;
    cout << "Start Population " << startPop << "\n"; 
    for(int i = 1; i <= days;i++){
        startPop += avgDailyPop * startPop;
        cout << "Day " << i << " Population " << startPop << "\n"; 
    }
    return 0;
}

