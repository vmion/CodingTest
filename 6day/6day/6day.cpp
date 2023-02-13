// 6day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "------------" << endl;
    cout << "1712번" << endl;
    int A, B, C;
    cin >> A >> B >> C;
    if (A > 2100000000 || B > 2100000000 || C > 2100000000)
    {
        return 0;
    }
    if (B >= C)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << A / (C - B) + 1 << endl;
    
    //시간 초과때문에 위로 교체
    int costFix = A;
    long long costSale;
    for (long long i = 1; i < 2100000100; i++)
    {
        costFix = costFix + B;
        costSale = C * i;
        long long space = i;
        if (costFix < costSale)
        {            
            cout << space << endl;   
            return 0;
        }        
    }    
    
    cout << "------------" << endl;
    cout << "2839번" << endl;
    int N;
    cin >> N;
    if (N < 3 || N > 5000)
    {
        return 0;
    }
    int i, j;
    i = N / 5;    
    cout << i << endl;
    while (true)
    {
        if (i < 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if ((N - (5 * i)) % 3 == 0)
        {
            j = (N - (5 * i)) / 3;
            break;
        }
        i--;
    }  
    cout << j << endl;
    return 0;
}