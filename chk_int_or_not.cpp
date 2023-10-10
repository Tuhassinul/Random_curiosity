#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.14159265358979323846;

template <typename T>

void check(T a){
    T num;
    num = pow(cos(pi* a), 2);

    if(num == 1)
        cout <<a<< " is Integer" << endl;
    else
        cout <<a<< " is Float" << endl;
}

int main(){
    cout<<"Enter any number to check if it integer or not: ";
    double num; 
    cin >> num; // Read user input

    check(num); // Call the check function with the user input

    return 0;
}
