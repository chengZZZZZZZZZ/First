
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <cmath>
using namespace std;
int x,a,b,c,n;

int main() {

cin >> x ;

a=x % 10;
b= x / 10 % 10 ;
c=x / 100;
n=a+b+c;
cout << n  << endl;
cout << n*n  << endl;
cout << n*n*n  << endl;
}