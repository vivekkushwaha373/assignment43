#include<bits/stdc++.h>
using namespace std;
int func(int arr[],priority_queue<int>x,int m)
{   
    
    static int count=0;
    
    if(x.size()==1 )
    {
        cout<<x.top();
        return 0;
    }
    if(x.size()==0)
    {
        cout<<"-1";
        return 0;
    }
    
    int index=INT_MAX;
    int n=x.top();
    x.pop();
    for(int i=0;i<m;i++)
    {
        if(arr[i]==n || arr[i]==x.top() )
        {
            count++;
            if(index>i)
            index=i;
            if(count<=2)
            arr[i]=INT_MIN;
        }
    }
    count=0;
    if(n!=x.top())
    {
        arr[index]=n-x.top();
    }
    priority_queue<int>y;
    for(int i=0;i<m;i++)
    {
        if(arr[i]!=INT_MIN)
        y.push(arr[i]);
    }
    func(arr,y,m);
    // return 0;
    
}
int main()
{
int n,m;
int arr[]={3,9,8,7};
n=sizeof(arr)/sizeof(int);
priority_queue<int>x;
for(int i=0;i<n;i++)
x.push(arr[i]);
func(arr,x,n);

    return 0;
}