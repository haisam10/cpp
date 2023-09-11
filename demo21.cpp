#include<iostream>
using namespace std;
int main(){
float total,unit,amount;
float l;
cout<<"Unit=";
cin>>unit;
if(unit <=50){
    amount= unit*0.50;
}
else if(unit <=150){
  l=unit-50;
  amount=25+(l*0.75);

}
else if(unit <=250){

     l=unit-150;
  amount=25+75+(l*1.20);
}
else if(unit >250){

     l=unit-250;
  amount=25+75+120+(l*1.50);
}
total=amount*0.2;
total=amount+total;
cout<<showpoint<<total;
}