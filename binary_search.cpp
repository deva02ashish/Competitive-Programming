#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int l = 0;
    int r = n - 1;
    while (l<=r)
    {

        int p = (l + r) / 2;
        if (arr[p] == key)
        {
            return p;
        }
        else
        {
            if (arr[p] < key)
            {
                l = p;
            }
            else
            {
                r = p;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
   cout<<"the index number : "<< binary_search(arr, n, key);
    return 0;
}