#include <iostream>
#include <queue>
using namespace std;
struct Node{
	int x;
    int step;
};

queue<Node> qu;
const int N = 201;
int  vis[N];
int  dx[N];
int n,s,k;

void bfs(){
    
	qu.push({s,0});
	vis[s] = 1;
	
	while(qu.empty() != 1){
		Node f = qu.front();
		qu.pop();
//		 cout<<11111111<<endl;
        if(f.x == k){
            cout<<f.step;
            return;
        }
        
		for(int j=0;j<2;j++){
				int nx = f.x + dx[f.x];
				if(j==1) nx = f.x - dx[f.x];
			//	 	cout<<nx<<" "<<f.x<<endl;
				if(nx>=1 && nx<=n  && vis[nx] == 0){
					vis[nx] = 1;
			//		cout<<nx<<" --> "<<f.step<<" -->"<<f.x<<endl;
					qu.push({nx, f.step+1});
				}
		}
				
	}
	cout<<-1;
}

int main()
{
	cin>>n>>s>>k;
	for(int i=1;i<=n;i++) cin>>dx[i];
	
	bfs();
	
	return 0;
}



/**
* @runId: 4279853
* @language: C++
* @author: 13712956095
* @submitTime: 2024-06-15 11:55:51
*/

/**
* @runId: 9365495
* @language: C++
* @author: 13926869280
* @submitTime: 2024-12-29 13:56:11
*/
