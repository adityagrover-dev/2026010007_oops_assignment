#include<iostream>
#include<string>
using namespace std;
class box{
    float length;
    float width;
    float height;
    float volume;
public:
    box(){
        cout <<"starting the calculation to find volume of the box : ";
    }
    box(float a,float b,float c){
        length=a;
        width=b;
        height=c;
        
    }
    void display(){
        volume=length*width*height;
        cout <<" volume of box : " <<volume;

    }
};
int main(){
    float a,b,c;
     cout <<"enter the length ";cin >>a;
     cout <<"enter the width ";cin >>b;
     cout <<"enter the height ";cin >>c;
    box s1;
    box s(a,b,c);
    s.display();
   return 0;
}