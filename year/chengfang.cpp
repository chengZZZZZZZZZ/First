#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <cmath>
using namespace std;
int simplePower(int a,  int b) 
{
    int k = 1;
    for ( int i = 0; i < b; ++i) 
    {   
        k *= a;
    }
    return k;
}
int main() {
    int x = 2025, y = 2025, k = 5 ,ans = 0;
    //cout << "需要生成："<< "几乘几"<< "的乘方表"<< endl;
    cin >> x ;  // 顺序读取不同类型数据
    //cout << "乘方表如下"<< endl;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
          
            cout << i<< " ^ "<< j<< " = "<< simplePower(i,j) << " ";
        }
        cout << endl ;
    }    
    //cout << "\n程序执行完成!" << endl;
    return 0;
}



