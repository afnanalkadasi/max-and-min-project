#include <iostream> 
using namespace std; 
class B; 
class A{ 
 int x; 
 public: 
 void read (){ 
  cout<<"please enter the first number :"<<endl; 
     cin >> x; 
 } 
 void max(B o); 
 void min(B o);               
}; 
class B{ 
 public: 
  int z; 
  void set_value(){ 
  cout<<"please enter the second number :"<<endl; 
  cin>>z; 
  } 
  friend class A ; 
}; 
void A::max(B o){ 
 if(x >= o.z) 
 ~15 ~ 
 
 cout<<"The maximum number 1 is :"<<x<<endl; 
 else 
 cout<<"The maximum number 1 is :"<<o.z<<endl; 
              } 
void A::min(B o){ 
 if(x <= o.z) 
 cout<<"The minimum number 2 is :"<<x<<endl; 
 else 
 cout<<"The minimum number 2 is :"<<o.z<<endl; 
} 
int main() { 
 A n; 
 B j; 
 n.read(); 
 j.set_value(); 
 n.max(j); 
 n.min(j); 
 return 0; 
}
