#include<iostream>
using namespace std;
bool isprime(int n)// take n as input
{
  if(n<=1)
  {
    return false;
  }

for(int i=2;i*i<=n;i++){
  if(n%i==0){
    return false;
  }
}
return true;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"-";
  if(isprime(arr[i])) {
    cout <<"Prime\n";
  } else {
    cout << "Not Prime\n";
  }
}
}
