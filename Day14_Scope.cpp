/* Question Link:- https://www.hackerrank.com/challenges/30-scope/problem */

#include <bits\stdc++.h>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> arr)
    {
        for (long unsigned int i = 0; i < arr.size(); i++)
        {
            elements.push_back(arr[i]);
        }
    }

    int computeDifference()
    {
        int n = elements.size(), max = elements[0], min = elements[0];
        for (int i = 0; i < n; i++)
        {
            if (elements[i] > max)
            {
                max = elements[i];
            }
            if (elements[i] < min)
            {
                min = elements[i];
            }
        }

        maximumDifference = abs(max - min);
        return maximumDifference;
    }
}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}