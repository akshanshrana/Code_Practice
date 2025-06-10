#include<iostream>
#include<map>
using namespace std;

int main(){
  int N, temp;
  cin>>N;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    cin>>temp;
    mp[temp]++;
  }
  for(auto i : mp){
    cout<<i.first<<"-"<<i.second<<endl;
  }
}
