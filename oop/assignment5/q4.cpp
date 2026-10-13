#include<iostream>
#include<string>
using namespace std;
class Mark{
    public:
    void result(int math){
        cout <<"marks in math subject : "<<math <<endl;
    }
    void result(int geo,int his){
        double avg2=(geo+his)/2.0;
        cout <<"average of geography and history : "<<avg2 <<endl;
    }
    void result(int phy,int bio,int chem){
        double avg3=(phy+bio+chem)/3.0;
        cout <<"average of physics ,biology and chemistry : "<<avg3 <<endl;
        
    }

};
int main(){
    Mark ob;
    ob.result(99);
    ob.result(92,95);
    ob.result(89,91,94);
    return 0;
}