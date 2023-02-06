// 1day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int main()
{    
    cout << "--------------------" << endl;
    cout << "1008번" << endl;
    double a, b;
    cin >> a;
    cin >> b;
    cout.precision(10);
    cout << a / b;    
    
    cout << "--------------------" << endl;
    cout << "18108번" << endl;
    int year;
    cin >> year;
    cout << year - 543 << endl;
    
    cout << "--------------------" << endl;
    cout << "3003번" << endl;
    int k, q, l, v, kn, p;
    cin >> k >> q >> l >> v >> kn >> p;
    if (0 > k || k > 10 || 0 > q || q > 10 || 0 > l || l > 10 || 0 > v || v > 10 || 0 > kn || kn > 10 || 0 > p || p > 10)
    {
        cout << "범위 초과의 수 입력" << endl;
    }
    else
    {
        cout << 1 - k << " " << 1 - q << " " << 2 - l << " " << 2 - v << " " << 2 - kn << " " << 8 - p << endl;;
    }      
    
    cout << "--------------------" << endl;
    cout << "10171번" << endl;
    cout << "\\   /\\" << endl;
    cout << " )  ( ')" << endl;
    cout << "(  /  )" << endl;
    cout << " \\(__)|" << endl;
    
    cout << "--------------------" << endl;
    cout << "14681번" << endl;
    int x, y;
    cin >> x;
    cin >> y;
    if (-1000 > x || x > 1000 || -1000 > y || y > 1000 || x == 0 || y == 0)
    {
        cout << "범위 초과의 수 입력" << endl;
    }
    else
    {
        if (x > 0 && y > 0)
        {
            cout << 1 << endl;
        }
        else if (x < 0 && y > 0)
        {
            cout << 2 << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << 3 << endl;
        }
        else if (x > 0 && y < 0)
        {
            cout << 4 << endl;
        }        
    }
}
