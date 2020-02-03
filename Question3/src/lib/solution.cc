#include "solution.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void Solution::print_vector(vector<int> v){
    if(v.size()>0){
        cout<<"after: {";
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

vector<int> Solution::RemoveDuplicates(vector<int> &input){
	vector<int>::iterator vector_iterator;
	sort(input.begin(),input.end());
	vector_iterator = unique(input.begin(),input.end());
	if(vector_iterator != input.end()){
		input.erase(vector_iterator,input.end());
	}
	return input;
}

vector<int> Solution::RemoveDuplicatesSet(vector<int> &input){
  set<int>s(input.begin(), input.end());
  input.assign(s.begin(), s.end());
  return input;
}

vector<int> Solution::ReverseOrder(vector<int> &input){
  reverse(input.begin(),input.end());
  return input;
}

vector<int> Solution::RemoveOdd(vector<int> &input){
    vector<int> v;
    vector<int>::iterator iterEnd = input.end();
    for(vector<int>::iterator iter = input.begin();iter!=iterEnd;++iter)
    {
        if( ((*iter) % 2) == 0)
            v.push_back(*iter);
    }
    input.swap(v);

    return input;
}

vector<int> Solution::ConcatenateTwo(vector<int> &input1, vector<int> &input2){
  vector<int> v;
  v.insert(v.end(),input1.begin(),input1.end());
  v.insert(v.end(),input2.begin(),input2.end());
  return v;
}

vector<int> Solution::IntersectionTwo(vector<int> &input1,vector<int> &input2){
    vector<int> v;
    sort(input1.begin(),input1.end());
    sort(input2.begin(),input2.end());
    set_intersection(input1.begin(),input1.end(),input2.begin(),input2.end(),back_inserter(v));
    return v;
}