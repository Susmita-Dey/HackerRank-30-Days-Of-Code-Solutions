/* Question Link:- https://www.hackerrank.com/challenges/30-2d-arrays/problem */

#include <iostream>
using namespace std;

int main()
{
    int arr[6][6], max = -64, hourglassSum = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hourglassSum = arr[i + 1][j + 1];
            for (int k = 0; k < 3; k++)
            {
                hourglassSum += arr[i][j + k] + arr[i + 2][j + k];
            }
            if (hourglassSum > max)
            {
                max = hourglassSum;
            }
        }
    }
    cout << max << endl;
    return 0;
}