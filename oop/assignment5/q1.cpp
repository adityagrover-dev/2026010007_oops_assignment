#include<iostream>
#include<string>
using namespace std;
class Print{
    public:
    
    void display(int a){
        cout <<"integer : " <<a <<endl;
    }
    void display(double b){
        cout <<"double : " <<b <<endl;
    }
    void display(string s){
        cout <<"string : " <<s <<endl;
    }

};
int main(){
    Print ob;
    ob.display(108);
    ob.display(22.5);
    ob.display("aditya");
    return 0;
}