#include<iostream>
#include<string>
using namespace std;
class Maximum{
    public:
    int findMax(int a,int b){
        return (a>b)?a:b;
    }
    int findMax(int a,int b,int c){
        return findMax(findMax(a,b),c);
    }
    double findMax(double a,double b){
        return (a>b)?a:b;
    }
};
int main(){
    Maximum ob;
    cout <<"greater of two integers (29,39) : "<<ob.findMax(29,39) <<endl;
    cout <<"greater of three integers (29,39,33) : "<<ob.findMax(29,39,33) <<endl;
    cout <<"greater of two double (11.3,10.9) : "<<ob.findMax(11.3,10.9) <<endl;
    return 0;
}