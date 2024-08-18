#include<bits/stdc++.h>
#define endl '\n'
#define fs first
#define ss second
#define pi acos(-1.0)
#define pb push_back
#define int long long
#define inf 1e9
#define decimal(x) fixed<<setprecision(x)
#define fri(a,b) for(int i=a;i<b;i++)
#define srt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.rbegin(),a.rend())
#define khelaSesh return 0
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL)
const int mod=1e9+7;
const int N=2e3+10;
using namespace std;
bool vis[N][N];
char grid[N][N];
int n,m;
bool isValid(int x,int y)
{
	if(x<0 or y<0 or x>=n or y>=m) return false;
	if(vis[x][y] or grid[x][y]=='#') return false;
	return true;
}
const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};
 
void dfs(int x,int y)
{
 
	vis[x][y]=true;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(isValid(nx,ny))
			{
				dfs(nx,ny);
				
			}
 
	}
 
 
}
 
void solve()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>grid[i][j];
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			if(!vis[i][j] and grid[i][j]=='.')
			{
				dfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans<<endl;
 
}
int32_t main()
{
   FAST;
	int t;
	t=1;
	// cin>>t;
	while(t--)
	solve();
	khelaSesh;
}
