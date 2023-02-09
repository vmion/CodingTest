// 3day.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 16)
    {
        cout << "입력 범위는 1 ~ 16입니다." << endl;
        return 0;
    }
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    string* result = new string[n];
    int ele = pow(2, n) - 1;

    for (int x = 0; x < n; x++)
    {
        arr1[x] = rand() % ele;
        arr2[x] = rand() % ele;
        int arr = arr1[x] | arr2[x];

        result[x] = bitset<16>(arr).to_string();
        reverse(result[x].begin(), result[x].end());
        result[x].resize(n);
        reverse(result[x].begin(), result[x].end());
        //cout << result[x] << " ";        
        //cout << endl;

        for (int y = 0; y < n; y++)
        {
            if (result[x][y] == '1')
            {
                result[x][y] = '#';
            }
            else result[x][y] = ' ';
        }
        cout << result[x] << " ";
        cout << endl;
    }

    delete[] arr1;
    delete[] arr2;
    delete[] result;
}
