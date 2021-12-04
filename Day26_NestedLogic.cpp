/* Question Link:- https://www.hackerrank.com/challenges/30-nested-logic/problem */

#include <iostream>
using namespace std;

int main()
{
    int d1, m1, y1, d2, m2, y2, fine;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (y2 == y1 || y2 > y1)
    {
        if (y2 > y1)
        {
            fine = 0;
        }
        else
        {
            if (m2 > m1)
            {
                fine = 0;
            }
            else
            {
                if (m2 == m1)
                {
                    if (d2 == d1 || d2 > d1)
                    {
                        fine = 0;
                    }
                    else
                    {
                        fine = 15 * (d1 - d2);
                    }
                }
                else
                {
                    fine = 500 * (m1 - m2);
                }
            }
        }
    }
    else
    {
        fine = 10000;
    }

    cout << fine << endl;
    return 0;
}