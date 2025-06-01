#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include <cmath>
using namespace std;



int main() {
        int x = 2025, y = 2025, ans = 0;

        cout << "请输入两个年份（空格分隔）：";
        cin >> x >> y ;  // 顺序读取不同类型数据
        for (int i = x + 1; i <= y - 1; i++)
    {
            if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
        { // 若年份 i 是闰年
            ans = ans + i; // 答案加上 i
        }
    }
        cout << "这两个年份间的闰年总和是"<< endl;
        cout <<  ans << endl;
    cout << "\n程序执行完成!" << endl;
    return 0;
}