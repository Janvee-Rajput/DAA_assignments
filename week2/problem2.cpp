#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int b,int e,int key)
{
    while(b<=e)
    {
        int mid=(b+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            b=mid+1;
        }
    }
        return -1;
    }

    void find_sequence(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int ind=binary_search(arr,j+1,n-1,arr[i]);
                if(ind>=0)
                {
                    cout<<i+1<<","<<j+1<<","<<ind+1<<endl;
                    return;
                }
            }
        }
        cout<<"No sequence found"<<endl;
    }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int z=0;z<n;++z)
    {
        int l;
        cin>>l;
        int arr[l];
        for(int i=0;i<l;++i)
        cin>>arr[i];
        find_sequence(arr,l);
    }
    return 0;
}