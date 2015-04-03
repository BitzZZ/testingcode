#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <cstring>

using namespace std;
map<string, int> h;

int main(){
    int n, i, j;
    cout<<"请输入集合数量:";
    cin>>n;
    h.clear();
    for(i = 1; i <= n; i++){
        int m;
        cout<<"请输入第"<<i<<"组集合元素数量:";
        cin>>m;
        for(j = 0; j < m; j++){
            string s;
            cin>>s;
            h[s]++;
        }
    }
    cout<<"交集为:"<<endl;
    for(map<string, int>::iterator it = h.begin(); it != h.end(); ++it){
        if (it -> second == n) cout<< it -> first <<endl;
    }
    return 0;
}
