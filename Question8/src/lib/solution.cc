#include "solution.h"
#include<iostream>
using namespace std;

//O(nlogn)
double Solution::FindMedian(vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  sort(inputs.begin(),inputs.end()); //sort input
  double result=0;
  if (inputs.size()%2==1){
    result=inputs[inputs.size()/2];
  }
  else{
    int index=inputs.size()/2;
    result=(inputs[index-1] + inputs[index])/2;
  }

  return result;
}

//O(n)
void Solution::print_vector(vector<int> v){
    cout<<"{";
    if(v.size()>0){
        for(int i=0;i<int(v.size());i++){
            cout<<v[i]<<",";  
        }
        cout<<"\b}";
    }
    else{
        cout<<"{}";
    }
    cout<<endl;
}

//O(nlogn)
vector<int> Solution::Reorder(vector<int> &inputs,int median){
  Solution solution;
  if (inputs.size() == 0){
    return inputs;
  }
  sort(inputs.begin(),inputs.end());
  if(inputs.size()%2==1){
    vector<int>v1;
    for (int i=0;i<inputs.size()/2;i++){
      v1.push_back(inputs[i]);
    }
    vector<int>v2;
    for (int i=inputs.size()/2+1;i<inputs.size();i++){
      v2.push_back(inputs[i]);
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    vector<int> v3;
    v3.insert(v3.end(),v1.begin(),v1.end());
    v3.push_back(median);
    v3.insert(v3.end(),v2.begin(),v2.end());
    return v3;
  }
  else{
    vector<int>v4;
    for (int i=0;i<inputs.size()/2;i++){
      v4.push_back(inputs[i]);
    }
    vector<int>v5;
    for (int i=inputs.size()/2;i<inputs.size();i++){
      v5.push_back(inputs[i]);
    }
    sort(v4.rbegin(),v4.rend());
    sort(v5.rbegin(),v5.rend());
    vector<int> v6;
    v6.insert(v6.end(),v4.begin(),v4.end());
    v6.insert(v6.end(),v5.begin(),v5.end());
    return v6;
  }
}

