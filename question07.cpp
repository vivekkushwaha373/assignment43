#include<bits/stdc++.h>
using namespace std;
void merge(int A[],int B[],int M,int N)
{
int j=0;
int mer[N+M];
priority_queue<int,vector<int>,greater<int>>x;
for(int i=0;i<N;i++)
x.push(A[i]);
for(int i=0;i<M;i++)
x.push(B[i]);
while(!x.empty())
{
    mer[j]=x.top();
    j++;
    x.pop();
}
for(int i=0;i<(M+N);i++)
{
cout<<mer[i]<<" ";
}
// return mer;
}
int main()
{
int A[]={5,6,8};
int B[]={4,7,8};
// int mer[6];
merge(A,B,3,3);
 return 0;
}