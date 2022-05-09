#include<bits/stdc++.h>
using namespace std;
int main(){
    int bsaalry; char grade;
    cin>>bsaalry>>grade;\
    float hr = bsaalry*20/100;
    float da = bsaalry*50/100;
    float pf = bsaalry*11/100;
    int a = 0;

    if(grade == 'A'){
        a  == 1700;
    }
     if(grade == 'B'){
        a == 1500; 
    }
    else{
        a == 1300;
    }
    int  tsalary =  bsaalry + hr + da + a - pf +1500;
    cout<<tsalary<<endl;

}