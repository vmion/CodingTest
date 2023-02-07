// 2day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "-------------" << endl;
    cout << "2884번" << endl;
    int H, M;
    cin >> H >> M;    
    if (0 > H || H > 23 || 0 > M || M > 59)
    {
        cout << "범위 초과" << endl;
    }    
    else
    {
        if (H == 0 || M < 45)
        {
            H = 24;
        }
        if (M >= 45)
        {
            cout << H << " " << M - 45 << endl;
        }
        if(M < 45)
        {
            cout << H - 1 << " " << -(M - 45) << endl;
        }        
    }
    cout << "-------------" << endl;
    cout << "2480번" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 6 || b > 6 || c > 6)
    {
        cout << "주사위의 눈은 6까지 입니다." << endl;
    }
    if (a == b && a== c)
    {
        cout << 10000 + (a * 1000) << endl;
    }
    else
    {
        if (a == b || a == c)
        {
            cout << 1000 + a * 100 << endl;
        }
        else if (b == c)
        {
            cout << 1000 + b * 100 << endl;
        }
        else
        {
            if (a > b && a > c)
            {
                cout << a * 100 << endl;
            }
            if (b > a && b > c)
            {
                cout << b * 100 << endl;
            }
            if (c > b && c > a)
            {
                cout << c * 100 << endl;
            }
        }
    }
    cout << "-------------" << endl;
    cout << "25304번" << endl;
    int X, N, A, B;
    int sum = 0;
    cout << "총금액 : " << endl;
    cin >> X;
    cout << "물건 종류의 수 : " << endl;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "물건 가격 : " << endl;
        cin >> A;
        cout << "물건 개수 : " << endl;
        cin >> B;
        sum += A * B;
    }
    if (X < 1 || X > 1000000000 || N < 1 || N > 100 || A < 1 || A > 1000000 || B < 1 || B > 10)
    {
        cout << "범위초과" << endl;
    }
    if (sum == X)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}