#include<bits/stdc++.h>
using namespace std;


vector<int> selectionSort(int n, vector<int> arr)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    return arr;
}

int main()
{
    
    int n;
    cout << "Enter number of array elements : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> sortedArr = selectionSort(n, arr);

    for(int i: sortedArr){
        cout << i << " ";
    }

    return 0;
}