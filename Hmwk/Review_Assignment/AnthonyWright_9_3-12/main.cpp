/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 6, 2022, 9:52 PM
 */

#include <cstdlib>
#include <iostream>
#include<iomanip>
/*
 * 
 */
int main(int argc, char** argv) {
    float divSales;
    std::cout << " Enter A floating point number"<< "\n";
    std::cin >> divSales;
    std::cout << std::setprecision(2) << std::fixed << std::setw(8)  << divSales;
    return 0;
};
