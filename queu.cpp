#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(12);
    q.push(13);
   q.push(14);
    while(q.size()){
        cout<<q.front()<<" \t"<<q.back()<<endl;
        q.pop();}
cout<<endl;
    priority_queue<int>qu;
    qu.push(10);
    qu.push(12);
    qu.push(13);
   qu.push(14);
    while(qu.size()){
        cout<<qu.top()<<endl;
        qu.pop();
}
}