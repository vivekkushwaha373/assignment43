#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[],int c[],int N)
{
    int count=0;
    int n=INT_MIN;
    priority_queue<int,vector<int>,greater<int>>x;
    priority_queue<int,vector<int>,greater<int>>y;
    priority_queue<int,vector<int>,greater<int>>z;
    for(int i=0;i<N;i++)
    {
        x.push(a[i]);
        y.push(b[i]);
        z.push(c[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(n<x.top()<y.top()<z.top())
        {
            cout<<x.top()<<" "<<y.top()<<" "<<z.top()<<endl;
            n=z.top();
            count++;
        }
        
        x.pop();
        y.pop();
        z.pop();

    }
    return count;
   
}
int main()
{
    int a[]={9,6,14,1,8};
    int b[]={2,10,3,12,11};
    int c[]={15,13,5,7,4};
    cout<<check(a,b,c,5);
    return 0;
}