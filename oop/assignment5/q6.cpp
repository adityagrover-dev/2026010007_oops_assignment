#include<iostream>
#include<string>
using namespace std;
class Bill{
    public:
    double calculateBill(int q,double p){
        return q*p;        
    }
    double calculateBill(int q1,int q2,double p1,double p2){
        return (q1*p1)+(q2*p2);        
    }
    double calculateBill(double t_amt,double dis_per){
        double amt=t_amt-(dis_per*t_amt/100);  
        return amt;      
    }

};
int main(){
    Bill ob;
    cout <<"bill for 1 item (10,55.5) : "<<ob.calculateBill(10,55.5) <<endl;
    cout <<"bill for 2 item (10,15,55.5,20.5) : "<<ob.calculateBill(10,15,55.5,20.5) <<endl;
    cout <<"bill after discount (15000.0,9.0) : "<<ob.calculateBill(15000.0,9.0) <<endl;
    return 0;
}