#include<bits/stdc++.h>
using namespace std;

void jump(vector<int> &arr,int key)
{
    int n=arr.size();
    int step = sqrt(n);
    int start =0,end =step, com=0;
    while(++com && arr[end]<=key && end<n)
    {
        start = end;
        end+=step;
        if(end>n-1)
        end = n;
    }
        for(int i=start ; i<end; i++)
        {
            if(++com && arr[i]==key)
            {
                cout << key << " is present\n";
                cout<< "Total comparisons = "<< com;
                return;
            }
        }
        cout<<key <<" is not present\n";
        cout<<"Total comparisons ="<<com;
}

    int main()
    {
        int test;
        cin>>test;
        while(test--)
        {
            int n,key;
            cin>>n;
            vector<int> arr(n);
            for(int i=0;i<n;i++)
            cin>>arr[i];
            cin>>key;
            jump(arr,key);
        }
    }