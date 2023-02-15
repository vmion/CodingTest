// 8day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "------------" << endl;
    cout << "1021번" << endl;
    int a, b;
    int head, tail;
    int count = 0;
    head = tail = 0;    
    cin >> a >> b;
    if (a > 50 || a < b)
    {
        return 0;
    }
    int* que = new int[a];
    for (int d = 0; d < a; d++)
    {
        que[d] = d + 1;
    }    
    for (int c = 1; c <= b; c++)
    {
        cin >> c;        
        if (c < 0 || c > a)
        {
            return 0;
        }
        else
        {
            for (int e = 0; e < a; e++)
            {
                if (que[head] == c)
                {
                    int* tmp = (int*)que[head];
                    delete(tmp);
                }
                else
                {
                    if (0 < (c - a))
                    {
                        que[e] = que[e + 1];
                        if ((int*)que[a])
                        {
                            que[0] = que[a];
                        }
                    }
                    if (0 > (c - a))
                    {
                        que[e] = que[e - 1];
                        if ((int*)que[a])
                        {
                            que[a] = que[0];
                        }
                    }
                }
            }
        }
    }
}