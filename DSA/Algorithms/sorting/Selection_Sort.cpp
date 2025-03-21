#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int>& v)
{
    size_t length = v.size();
    int temp, min_ind;
    for (size_t i=0; i< length; i++)
    {
        min_ind=i;
        for (size_t j=i+1 ; j < length ; j++)
        {
            if (v[min_ind] > v[j])
            {
                min_ind=j;
            }
        }
        if (i != min_ind)
        {
        swap(v[min_ind],v[i]);
        }
    }
}

int main()
{
    vector<int>arr;
    for (int i=10 ; i >= 0 ;i--)
        arr.push_back(i);

    selectionsort(arr);

    for(int i : arr)
        cout << i << endl;

    return 0;
}