#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int key,bool find_first_occurence)
{
    int b=0,e=l-1;
    while(b<=e)
    {
        int mid=(b+e)/2;
        if(arr[mid]==key)
        {
            if(find_first_occurence)
            {
                if(mid==0|| arr[mid-1]<arr[mid])
                return mid;
                else
                e=mid-1;
            }
            else
            {
                if(mid==l-1||arr[mid+1]>arr[mid])
                return mid;
                else
                b=mid+1;
            }
        }
        else if(arr[mid]>key)
        e=mid-1;
        else
        b=mid+1;
    }
    return -1;
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
        int key;
        cin>>key;
        int first_occurence=binary_search(arr,l,key,true);
        if(first_occurence>=0)
        {
            int last_occurence=binary_search(arr,l,key,false);
            cout<<key<<"-"<<last_occurence-first_occurence+1<<endl;
            continue;
        }
        cout<<"key not found"<<endl;
    }
    return 0;
}