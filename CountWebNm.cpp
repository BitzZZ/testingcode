#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <cstring>

using namespace std;
map<string, int> h;

int main(){
    int n, i, j;
    cin>>n;
    h.clear();
    for(i = 0; i < n; i++){
        string x;
        cin>>x;
        x.erase(0, 7);
        if (x.substr(0, 4) == "www.") x.erase(0, 4);
        j = 0;
        int l = x.size();
        while(j < l && x[j] != '/')j++;
        x = x.substr(0, j);
        h[x]++;
    }
     for(map<string, int>::iterator it = h.begin(); it != h.end(); ++it){
       cout<< it -> first << " " << it -> second << endl;
    }
    return 0;
}

