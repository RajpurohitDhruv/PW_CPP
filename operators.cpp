#include<iostream>
using namespace std;

int main() {

int a = 10; 
int b = 5;
//relational operators
cout << (a < b) << endl;
cout << (a > b) << endl;
cout << (a == b) << endl;
cout << (a <= b) << endl;
cout << (a >= b) << endl;
cout << (a != b) << endl;
//arithmetic operators
cout << a+b << endl;
cout << a-b << endl;
cout << a*b << endl;
cout << a/b << endl;
cout << a%b << endl;

//logical operators
bool exp1 = true;
bool exp2 = false;

cout << (exp1 && exp2) << endl;
cout << (exp1 || exp2) << endl;
cout << (!exp1) << endl;

//increment and decrement operators
int num = 10;
cout << (++num) << endl;
cout << (num++) << endl;
cout << (--num) << endl;
cout << (num--) << endl;

//bitwise operators
int x = 10;
int y = 5;
cout << (x & y) << endl;
cout << (x | y) << endl;
cout << (x ^ y) << endl;
cout << (~x) << endl;
cout << (x << 2) << endl;
cout << (x >> 2) << endl;
return 0;
}