#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int x;
int ans;
cin >> x ; 
    for (int i = 1; x >=5000 ; i++)
    {
    	x = x + 2023 ;
    }
	ans= x % 2023 ;	
	cout << ans <<  endl;
	return 0;	
}



