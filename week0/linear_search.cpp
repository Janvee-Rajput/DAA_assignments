#include<bits/stdc++.h>
using namespace std;

void solve(int *arr,int n,key)
{
    int com=0;
    for(int i=0;i<n;i++)
    {
        com++;
        if(arr[i]==key)
        {
            cout<<key << "is present\n";
            cout<<"Total comparisons = "<<com;
            return;
        }
    }
    cout<<key <<" is not present\n";
    cout<<"Total comparisons ="<<com;
    }

    int main()
    {
        int t,n,key;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            cin>>key;
            solve(arr,n,key);
        }
    }