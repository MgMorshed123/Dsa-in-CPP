#include<bits/stdc++.h>
using namespace std;
int main(){


  vector<int>v = {1,2,3,4,5,6,7,8};
  auto it= find(v.begin(), v.end(),3);
 
   cout<< *it ;
  if(it == v.end())  cout<< "Not found" ;
  else  cout<< " found";

  return 0;

}