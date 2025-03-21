#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int> & arr, long left, long right)
{
    long i=left-1, j= left, pivot = right;
    int temp;
    if(left< right)
    {
        while(j < pivot)
        {
            if(arr[pivot] < arr[j])
                j++;

            else
            {

                temp = arr[++i];
                arr[i] = arr[j];
                arr[j++] = temp;

            }
        }
        temp = arr[++i];
        arr[i] = arr[pivot];
        arr[pivot] = temp;
        pivot = i;

        quicksort(arr, left, pivot-1);
        quicksort(arr, pivot+1, right);

    }





}

int main()
{
    vector<int> arr;
    int k, n;
    cin >> n ;
    for (int k=0; k < n; k++)
    {
        cin >> k;
        arr.push_back(k);
    }
    
    quicksort(arr, 0, arr.size()-1);

    for(int i : arr)
            cout << i;
    return 0;
}