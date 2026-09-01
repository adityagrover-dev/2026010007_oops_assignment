#include<iostream>
#include<string>
using namespace std;
class Number{
    float a;
    float b;
    public:

    Number(float x,float y){
        a=x;
        b=y;
    }

    friend void display(Number s);

};
void display(Number s){
    cout <<"sum of two numbers : " <<s.a+s.b<<endl;
}
int main(){
    float x,y;
    cout <<"enter first number ";cin >>x;
    cout <<"enter second number ";cin >>y;
    
    Number s1(x,y);
    display(s1);

    return 0;
}