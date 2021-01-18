#include <bits/stdc++.h>
using namespace std;
void pRep(int arr[], int size)
{
    int i;
    cout << "\nThe repeating elements are:" << endl;
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    pRep(arr, arr_size);
    int arra[] = { 1, 2, 3, 4,3 };
    int arra_size = sizeof(arra) / sizeof(arr[0]);
    pRep(arra,arra_size);
    return 0;
}
