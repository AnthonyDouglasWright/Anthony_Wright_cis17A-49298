/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 7, 2022, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

/*
 * 
 */
float kineticEnergy(float mass, float velocity){
    return (mass*pow(velocity,2))/2;
}
int main(int argc, char** argv) {
    float m;
    float v;
    cout<< "Kinetic Energy Calculator"<< "\n" << "Enter the Mass of Object in motion: ";
    cin >> m;
    cout << "Enter the Velocity of that mass: ";
    cin >> v;
    float KE = kineticEnergy(m,v);
    cout << "The Kinetic Energy of that mass at that velocity is : " << KE << " J";
    return 0;
}

