// triangle pattern with letters
#include<iostream>
using namespace std;
int main(){

 int i,j,num;
  
    cin>>num;
    char ch;
  for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
        ch='A'+num-i+j-1;
        cout<<ch; 
      } 
       cout<<endl;   
  }
return 0;
}
