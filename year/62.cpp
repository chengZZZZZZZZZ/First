
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <cmath>
using namespace std;
int x;

int main() {

cin >> x ;
if (x % 62 == 0) 
{
	cout << "Yes" << endl;
    return 0;
    } 
    else while (x>10) {
        if (x % 100 == 62) 
        {
            cout << "Yes" << endl;
            return 0;
        }
        x = x/10;
    }
    
    cout << "No"  << endl;
}