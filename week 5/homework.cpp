#include <iostream>
using namespace std;

int main(int argc, char** argv) {
int mimdinare, shualeduri, daskvniti, damatebiti, saboloo;
bool x;
cout<<"sheitanet mimdinare (0..40), shualeduri (0..20) da daskvniti (0.40) shefasebebi"<<endl;
cin>>mimdinare>>shualeduri>>daskvniti;
/*
if( ((mimdinare>40) || (mimdinare<0)) || ((shualeduri>20) || (shualeduri<0)) || ((daskvniti>40) || (daskvniti<0)) ){
cout<<"arascoria mimdinare an/da shuleduri an/da daskvniti shefaseba";
return 0;
}
*/
if ((mimdinare>40) || (mimdinare<0)){
cout<<"arascoria mimdinare shefaseba"<<endl;
x = true;
}
if ((shualeduri>20) || (shualeduri<0)){
cout<<"arascoria shualeduri shefaseba"<<endl;
x = true;
}
if ((daskvniti>40) || (daskvniti<0)){
cout<<"arascoria daskvniti shefaseba"<<endl;
x = true;
}
if (x)
{
    return 0;
}
saboloo=mimdinare+shualeduri+daskvniti;
if ((saboloo>=91) && (saboloo<=100))
cout<<saboloo<< " A";
else        
if ((saboloo>=81) && (saboloo<=90))
cout<<saboloo<< " B";
else
if ((saboloo>=71) && (saboloo<=80))
cout<<saboloo<< " C";
else
if ((saboloo>=61) && (saboloo<=70))
cout<<saboloo<< " D";
else
if ((saboloo>=51) && (saboloo<=60))
cout<<saboloo<< " E";
else
if ((saboloo>=41) && (saboloo<=50))
cout<<saboloo<< " Fx";
else
if ((saboloo>=21) && (saboloo<=40))
cout<<saboloo<< " Fx";
else
if ((saboloo>=0) && (saboloo<=40))
cout<<saboloo<< " F";
else
cout<<"arascori qula";
return 0;
}