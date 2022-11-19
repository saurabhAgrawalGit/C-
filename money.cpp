#include<iostream>
using namespace std;
int main(){
     
      int RS100,RS50 ,RS20,RS10,RS5,RS1 ,money;
       
       cin>>money;
       switch (1)
       {
       case 1: RS100 = money / 100;
              money%=100;
       case 2: RS50 = money / 50;
              money%=500;
       case 3: RS20 = money / 20;
              money%=20;
       case 4: RS10 = money / 10;
              money%=10;
       case 5: RS5 = money / 5;
               money%=5;
       case 6: RS1= money / 1;
              money%=1;
            
       }

       cout<<"Number Of Rs100 Rupees Note :"<<RS100<<endl;
       cout<<"Number Of Rs50  Rupees Note :"<<RS50<<endl;
       cout<<"Number Of Rs20  Rupees Note :"<<RS20<<endl;
       cout<<"Number Of Rs10  Rupees Note :"<<RS10<<endl;
       cout<<"Number Of Rs5   Rupees Coin :"<<RS5<<endl;
       cout<<"Number Of Rs1   Rupees Coin :"<<RS1<<endl;

}