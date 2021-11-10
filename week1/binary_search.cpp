#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &arr,int key)
{
    int n =arr.size();
    int l=0,r=n-1,com=0;

    while(l<=r)
    {
        int mid=(l+r)/2;
        if(++com && arr[mid] == key)
        {
            cout << key << "is present\n";
            cout << "Total comparisons = " << com;
            return;
        }
        else if(key>arr[mid])
        l=mid+1;
        else r=mid-1;
    }
    cout<<key <<" is not present\n";
    cout<<"Total comparisons = "<<com;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,key;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin >> arr[i];
        cin>>key;
        binarySearch(arr, key);
    }
}