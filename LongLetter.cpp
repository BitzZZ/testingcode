#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
struct Ans{
    int len; //最长长度
    string s;
    void clear(){
        len = 0;
        s.clear();
    }
} ans;
int main(){
    string x;
    ans.clear();
    cin>>x;
    int n = x.size();
    for(int i = 0; i < n;){
        int j;
        if (!isalpha(x[i])){
            i++;
            continue;
        }
        j = i;
        while(j < n && isalpha(x[j])) j++;
        if (j - i > ans.len){
            ans.len = j - i;
            ans.s = x.substr(i, j - i);
        }
        i = j;
    }
    cout<<ans.s<<endl;
    return 0;
}
