#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int l=0,r=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    while(r<n)
    {
        if(arr[r]-arr[l]==k){
            cout<<"("<<arr[l]<<","<<arr[r]<<")"<<endl;
            count++;
            l++;
            r++;
        }
        else if(arr[r]-arr[l]>k) l++;
        else r++;
    }
    cout<<"number of pairs:"<<count<<endl;
}
