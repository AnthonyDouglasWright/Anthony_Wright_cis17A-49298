/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: ace
 *
 * Created on September 8, 2022, 10:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// is this the better way of running to initialize the function above the define below??
void sortArray(string array[], int arraySize);
void swap(string &a, string &b);
int binarySearch(string array[], int arraySize, string name);
int main(int argc, char** argv) {
    string name;
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] ={"Collins, Bill", "Smith, Bart", "Allen, Jim","Griffin, Jim", "Stamey, Marty","Rose, Geri", "Taylor, Terri", "Johnson, Jill", "Allison, Jeff", "Looney, Joe", "Wolfe, Bill","James, Jean","Weaver, Jim", "Pore, Bob","Rutherford, Greg", "Javens, Renee", "Harrision, Rose","Setzer, Cathy", "Pike, Gordon","Holland, Beth"};
    sortArray(names, NUM_NAMES);
    cout << "Enter a Name to Search Directory : ";
    //Had issues with this and did not know cin would sepeate value if space exsists so to use getline
    getline(cin,name);
    int searchPostion = binarySearch(names, NUM_NAMES, name);
    if(searchPostion == -1) cout << "Name is not found";
    else cout << "Found " << names[searchPostion];
    return 0;
}



/* Sorting the Binary Searching is actually inefficent in this case unless this was
 * directory system that would save the name in Alphabetical order then we ran the binary search
 */
void sortArray(string array[], int arraySize){
    int minIndex;
    string minValue;
    // sort runs two arrays finds the each postion one by one
    //works good for this data but can be very slow
    for(int i = 0; i < arraySize-1; i++){
        minIndex = i;
        minValue = array[i];
        for(int index = i+1; index < arraySize; index++){
            if(array[index] < minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[i]);
    }
}
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}
// Fast search if everything is in order 
int binarySearch(string array[], int arraySize, string name){
    // Binary search basicly devides the data  structure in half and check in it will be in the first or second half
    int start = 0;
    int end = arraySize -1;
    int middle;
    int postion = -1;
    bool located = false;
    // The loop runs though each half until the search criteria is found 
    while(!located && start <= end){
        middle = (start + end)/2;
        // this is the match
        if(array[middle] == name){
            located = true;
            postion = middle;
        }
        // in first half
        else if (array[middle] > name){
            end = middle - 1;
        }
        //in second half
        else{
            start = middle + 1;
        }  
    }
    return postion;
}