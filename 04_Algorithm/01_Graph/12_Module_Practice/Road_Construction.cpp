#include<bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];
int n, e;
int cmp, mx;
int find(int src){
    if(par[src] == -1){
        return src;
    }

    int leader = find(par[src]);
    par[src] = leader;
    return leader;
}
 
void DSU_Union(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(leader1 == leader2){
        return;
    }
    if(group_size[leader1] >= group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        mx = max(mx, group_size[leader1]);
    }else{
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx = max(mx, group_size[leader2]);
    }

    cmp--;
}
int main(){
 
    cin >> n >> e;
    

    cmp = n;
    mx = 1;
    for(int i = 1;i<=n;i++){
        par[i] = -1;
        group_size[i] = 1;
    }
    while(e--){
        int a , b;
        cin >> a >> b;
   
        DSU_Union(a,b);
        cout << cmp << " " << mx <<"\n";
    }
    
    return 0;
}