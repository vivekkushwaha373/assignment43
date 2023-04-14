#include<bits/stdc++.h>
using namespace std;
int main()
{
 priority_queue<int>x;//minimum queue
for(int i=0;i<5;i++)
x.push(2*i);

priority_queue<int>y;

for(int i=0;i<5;i++)
y.push(3*i);
x.swap(y);
while(!x.empty())
{
    cout<<x.top()<<" ";
    x.pop();
}
cout<<endl;
while(!y.empty())
{
    cout<<y.top()<<" ";
    y.pop();
}
    return 0;
}