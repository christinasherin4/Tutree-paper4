#include <bits/stdc++.h>
using namespace std;

int minD(int arr[], int n, int x, int y)
{
    int i, j;
    int min_d = INT_MAX;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if( (x == arr[i] && y == arr[j] ||
                y == arr[i] && x == arr[j]) &&
                min_d > abs(i-j))
            {
                min_d = abs(i-j);
            }
        }
    }
    return min_d;
}
int main()
{
    int arr[] = {1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;
    int y = 2;

    cout << "Minimum distance between " << x <<
                    " and " << y << " is " <<
                    minD(arr, n, x, y) << endl;
    int arr1[] = {3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int x1 = 3;
    int y1 = 5;

    cout << "Minimum distance between " << x1 <<
                    " and " << y1 << " is " <<
                    minD(arr1, n1, x1, y1) << endl;

    int arr2[] = {3,5,4,2,6,5,6,6,5,4,8,3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int x2 = 3;
    int y2 = 6;

    cout << "Minimum distance between " << x2 <<
                    " and " << y2 << " is " <<
                    minD(arr2, n2, x2, y2) << endl;

    int arr3[] = {2,5,3,5,4,4,2,3};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int x3 = 3;
    int y3 = 2;

    cout << "Minimum distance between " << x3 <<
                    " and " << y3 << " is " <<
                    minD(arr3, n3, x3, y3) << endl;
}
