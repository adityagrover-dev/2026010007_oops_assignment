#include<iostream>
#include<string>
using namespace std;
class Area{
    public:
    void calculate(int s){
        cout <<"area of square : " <<(s*s) <<endl;
    }
    void calculate(int l,int b){
        cout <<"area of rectangle : " <<(l*b) <<endl;
    }
    void calculate(double r){
        cout <<"area of circle : " <<(22*r*r/7) <<endl;
    }
};
int main(){
    Area obj;
    obj.calculate(5);
    obj.calculate(20,35);
    obj.calculate(3.5);
    return 0;
}