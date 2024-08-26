/*************************************************************************
    > File Name: main.cpp
    > Author: Fgh
    > Created Time: 2024年08月22日 星期四 13时59分29秒
 ************************************************************************/

#include <iostream>
#include "func.h"

using namespace std;

int main(void)
{
    int a, b, c;
    cout <<"请输入第一个数";
    cin >> a;
    cout <<"请输入第二个数";
    cin >> b;

    c = add(a,b);

    cout << "结果为 " << c << "!" << endl;
    return 0;
}
