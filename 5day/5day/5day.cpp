// 5day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    cout << "------------" << endl;
    cout << "2675번" << endl;
    int t;
    cin >> t;
    if (t < 1 || t > 1000)
    {
        return 0;
    }
    for (int a = 0; a < t; a++)
    {
        int r;
        cin >> r;
        if (r < 1 || r > 8)
        {
            return 0;
        }
        string s;
        cin >> s;
        if (s.size() < 1 || s.size() > 20)
        {
            return 0;
        }
        for (int b = 0; b < s.length(); b++)
        {
            for (int c = 0; c < r; c++)
            {
                cout << s[b];
            }
        }
        cout << endl;
    }  
    cout << "------------" << endl;
    cout << "5622번" << endl;
    int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10,10,10,10 };
    int totalTime = 0;
    string w;
    cin >> w;
    for (int e = 0; e < w.length(); e++)
    {
        if (islower(w[e]))
        {
            return 0;
        }
    }
    if (w.length() < 2 || w.length() > 15)
    {
        return 0;
    }
    for (int d = 0; d < w.length(); d++)
    {
        int index = w[d] - 65;
        //영문 대문자 아스키코드 65 ~ 90
        totalTime += time[index];
    }
    cout << totalTime << endl;
}