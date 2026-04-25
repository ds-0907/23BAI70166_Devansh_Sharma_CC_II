#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;int n,m,i,j,c,l,p;string s;
vector<string> v[600005];
int main(){
	cin>>n>>m;
	while(n--) cin>>s,v[s.length()].push_back(s);
	while(m--){
        cin>>s;
		if(mp[s]==1) cout<<"YES"<<"\n";
		else if(mp[s]==2) cout<<"NO"<<"\n";
		else{
			c=0;l=s.length();p=v[l].size();
			for(i=0;i<p;i++){
				c=0;
				for(j=0;j<l;j++){
					if(v[l][i][j]!=s[j]) c++;
					if(c>1) break;
				}
				if(c==1){cout<<"YES"<<"\n";mp[s]=1;break;}
			}
			if(c!=1){cout<<"NO"<<"\n";mp[s]=2;}
		}
	}
	return 0;
}
