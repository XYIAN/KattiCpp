/*
Kyle Dilbeck 
cst300
kattis solution problem list#1



*/
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    b -= a;

    if(b == 1) {//if you have one piece remain
        cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
    }
    else if(b == -1) { //missing  1 peice 
        cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
    }
    else if(b < 0) { // missing any 
        cout << "Dr. Chaz needs " << -b << " more pieces of chicken!" << endl;
    }
    else { //cout current chicken 
        cout << "Dr. Chaz will have " << b << " pieces of chicken left over!" << endl;
    }
}