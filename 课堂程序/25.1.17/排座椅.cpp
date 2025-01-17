#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N=1010;
int n,m,k,l,d;
PII row[N];//row[i].first表示第i行讲话的人的数量，second表示行号
PII col[N];
int q[N]; 
int main(){
	cin>>n>>m>>k>>l>>d;
	for(int i=1;i<=n;i++) row[i].second=i;
	for(int i=1;i<=m;i++) col[i].second=i;
	while(d--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(abs(x1-x2)==1) row[min(x1,x2)].first++;
		else col[min(y1,y2)].first++;
	}
	sort(row+1,row+n+1);
	sort(col+1,col+1+m);
	//安排k条通横向通道
	int cnt=0;
	for(int i=n;i>n-k;i--) q[cnt++]=row[i].second;
	sort(q,q+cnt);
	for(int i=0;i<cnt;i++) cout<<q[i]<<" ";
	cout<<endl; 
	//安排l条纵向通道 
	cnt=0;
	for(int i=m;i>m-l;i--) q[cnt++]=col[i].second;
	sort(q,q+cnt);
	for(int i=0;i<cnt;i++) cout<<q[i]<<" ";
	cout<<endl; 
	return 0;
}

