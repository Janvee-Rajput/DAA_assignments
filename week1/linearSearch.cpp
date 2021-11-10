#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >>test;
    while(--test)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int i,key,com=1;
        cin>>key;
        for(i=0;i<n;i++,com++)
        if(arr[i]==key)
        break;
        if(i==n)
        {
            cout <<"Not present";
        }
        else
        cout <<"Present "<<com;
    }
    return 0;
}