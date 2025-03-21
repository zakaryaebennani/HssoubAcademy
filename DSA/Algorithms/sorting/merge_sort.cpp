#include<iostream>
#include<vector>
using namespace std;

void mergearr(vector<int> &arr, unsigned int left, unsigned int mid , unsigned int right)
{
    int k=left;

    vector<int> L,R;
    for (unsigned int i=left ; i<mid ; i++)
        L.push_back(arr[i]);

    for(unsigned int i=mid; i<= right ; i++)
        R.push_back(arr[i]);

    unsigned int i=0, j=0;

    while(i<(mid-left) && j<(right-mid+1))
    {
        if (L[i] < R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while(i<(mid-left))
    {
        arr[k++] = L[i++];
    }

    while(j<(right-mid+1))
    {
        arr[k++] = R[j++];
    }

}
void mergesort(vector<int> &arr, unsigned int l, unsigned int r)
{
    if (l<r)
    {
    unsigned int mid = (l+r)/2 ;

    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);


    mergearr(arr,l, mid+1, r);



    }
}

int main()
{
    vector <int> v={9,7,8,2};

    mergesort(v,0,v.size()-1);
    for (unsigned int i=0 ; i < v.size() ; i++)
        cout << v[i] << " ";
}








