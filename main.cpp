#include<iostream>
#include "avg.h"
#include "avg.cpp"
using namespace std;

//this is the actual program and it gets to use our "module" just like any other.

int main(){
    cout << average(34.0, 36.0) << endl;
    return 0;
}

