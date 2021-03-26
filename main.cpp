//
//  main.cpp
//  Assignment_1
//
//  Created by Noah Honickman on 1/5/21.
//This program takes two integers and reports all the integers between them (inclusive) //using a loop

#include <iostream>
#include <string>
#include <cstring> 
using namespace std;
int main() {
    int a;
    int b;
    cout << "Enter two integers.\n";
    cin >> a;
    cin >> b;
    int sum = 0;
    for(int i = a; i<= b; i++){
        sum = sum + i;
        
    }
    cout << "The sum of all the numbers between " << a << "and " << b << " is " << sum << "\n";
    

    

    return 0;
}
