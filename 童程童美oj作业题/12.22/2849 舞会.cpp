#include <bits/stdc++.h>
using namespace std;
queue<int> a;
queue<int> b;
int main() {
	int n,m,t;
    cin>>n>>m>>t;
    for(int i=1;i<=n;i++) a.push(i);
    for(int i=1;i<=m;i++) b.push(i);
    while(t--){
        cout<<a.front()<<" "<<b.front()<<endl;
        a.push(a.front());
        a.pop();
        b.push(b.front());
        b.pop();
    }
    return 0;
}
