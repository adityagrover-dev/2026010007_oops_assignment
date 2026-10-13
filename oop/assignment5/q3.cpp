#include<iostream>
#include<string>
using namespace std;
class Calculator{
    public:
    void sum(int a,int b){
        cout <<"sum of two integers : " <<a+b <<endl;
    }
    void sum(int a,int b,int c){
        cout <<"sum of three integers : " <<a+b+c <<endl;
    }
    void sum(double a,double b){
        cout <<"sum of two decimal numbers : " <<a+b <<endl;
    }
};
int main(){
    Calculator ob;
    ob.sum(10,20);
    ob.sum(10,20,30);
    ob.sum(10.5,22.4);
    return 0;
}