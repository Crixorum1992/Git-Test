//Name: Nicholas Reid
//File: main.cpp
//Description: Sums

#include <iostream>

using namespace std;

int sum (int n);
int product (int n);

int main () {
  int n;
  cout<<"Choose a number"<<endl;
  cin>>n;
  cout<<"Sum "<<sum(n)<<endl;
  cout<<"Product "<<product(n)<<endl;
}

int sum(int n){
  int x=1;
  int y=0;
  while (x<=n){
    y=x+y;
    x++;
  }
  return y;
}

int product(int n){
  int x=1;
  int y=1;
  while (x<=n){
    y=x*y;
    x++;
  }
  return y;
}
    
