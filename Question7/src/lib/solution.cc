#include "solution.h"
#include<iostream>
using namespace std;


int Solution::isMappable(string &from, string &to){
    if (from.length()!=to.length()){
        return 0;
    }
    else{
        int charmap[256];
        memset(charmap,-1,sizeof(charmap));
        for(int i=0;i<from.length();i++){
            if(charmap[from[i]]==-1){
                charmap[from[i]]=to[i];
            }
            else if(charmap[from[i]]!=to[i]){
                return 0;
            }
        }
        for (int i=0;i<256;i++){
            if(charmap[i]!=-1){
                cout<<"("<<char(i)<<"->"<<char(charmap[i])<<")";
            }
        }
        return 1;
    }
}
