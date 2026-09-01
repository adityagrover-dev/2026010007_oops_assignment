#include<iostream>
#include<string>
using namespace std;
class complex{
    float real;
    float img;
public:
    complex(){
        real=10;
        img=5;
    }
    complex(float a,float b){
        real=a;
        img=b;
        
    }
    void display(){
        cout << real;

        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";

        cout << endl;
    }

        

};
    int main(){
    float a,b;
     cout <<"enter the real part ";cin >>a;
     cout <<"enter the imaginary part ";cin >>b;
    complex s1;
    complex s2(a,b);
    s1.display();
    s2.display();
   return 0;
}