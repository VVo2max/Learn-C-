#include<bits/stdc++.h>
using namespace std;
const int N=10;
char g[N][N];
bool row[N][N],col[N][N],cell[3][3][N];
//cell[x/3][y/3][i]表示(x,y)这个点所在的小的九宫格出现了数字i 
bool dfs(int x,int y){
	if(y==9) x++,y=0;
	if(x==9){
		for(int i=0;i<9;i++) puts(g[i]);
		return 1;
	}
	if(g[x][y]!='.') return dfs(x,y+1); 
	for(int i=1;i<=9;i++){
		if(!row[x][i]&&!col[y][i]&&!cell[x/3][y/3][i]){
			g[x][y]=i+'0';
			row[x][i]=col[y][i]=cell[x/3][y/3][i]=true;
			if(dfs(x,y+1)) return true;
			g[x][y]='.';
			row[x][i]=col[y][i]=cell[x/3][y/3][i]=false;
		}
	} 
	return false;
}
int main(){
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++){
			cin>>g[i][j];
			if(g[i][j]!='.'){
				int t=g[i][j]-'0';
				row[i][t]=col[j][t]=cell[i/3][j/3][t]=true;	
			}
		}
	dfs(0,0);
	return 0;
}   
/*
.2738..1.
.1...6735
.......29
3.5692.8.
.........
.6.1745.3
64.......
9518...7.
.8..6534.
*/
