// 4day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int f(int num)
{
    int sum = num;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    cout << "------------" << endl;
    cout << "2439번" << endl;
    int n;
    cin >> n;    
    if (n < 1 || n >100)
    {
        return 0;
    }
    for (int a = 1; a <= n; a++)
    {
        for (int b = 0; b < (n - a); b++)
        {
            cout << ' ';
        }
        for (int c = 0; c < a; c++)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << "------------" << endl;
    cout << "1546번" << endl;
    int s;
    cin >> s;
    if (s < 1 || s > 1000)
    {
        return 0;
    }
    vector<int> scores;
    vector<float> newScores;
    for (int d = 1; d <= s; d++)
    {
        int val;
        cin >> val;
        scores.push_back(val);
    }
    int maxScore = *max_element(scores.begin(), scores.end());
    for (int e = 0; e < scores.size(); e++)
    {
        float val;
        val = (float)scores[e] / maxScore * 100;
        newScores.push_back(val);
    }
    scores.clear();       
    float avg = accumulate(newScores.begin(), newScores.end(), 0.0) / newScores.size();
    cout << avg << endl;
    newScores.clear();

    cout << "------------" << endl;
    cout << "4673번" << endl;
    bool Check[10001] = { false, };
    for (int g = 1; g < 10001; g++) 
    {
        int h = f(g);
        if (h < 10001) 
        { 
            Check[h] = true;
        }
    }
    for (int i = 1; i < 10001; i++) 
    {
        if (!Check[i]) {
            cout << i << "\n";
        }
    }
}