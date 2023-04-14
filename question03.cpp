#include<bits/stdc++.h>
using namespace std;
int main()
{
 priority_queue<int,vector<int>,greater<int>>x;//minimum queue
x.push(2);
x.push(9);
x.push(21);
x.push(1);
// x.pop();
while(!x.empty())
{
    cout<<x.top()<<" ";
    x.pop();
}
    return 0;
}