#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={2,3,1,5,6,3,7,9,14,10,2,5};
int K=35;
priority_queue<int>x;
for(int i=0;i<12;i++)
x.push(arr[i]);
int sum=0,count=0;
while(!x.empty() && sum<K )
{
sum+=x.top();
x.pop();
count++;
}
cout<<count;

return 0;
}