#include<iostream>
#include<string>
using namespace std;
class Vechile{
    public:
    string brand;
    string model;
    void acceptVechile(){
        cout <<"enter the brand ";
        cin >>brand;
        cout <<"enter the model ";
        cin >>model;
    }
};
class Car:public Vechile{
    public:
    int ndoor;
     void acceptCar(){
        acceptVechile();
        cout <<"enter the number of door ";
        cin >>ndoor;
    }
    void displayCar(){
        cout <<"\n brand of the vechile: " <<brand <<endl;
        cout <<"model of the vechile : " <<model <<endl;
        cout <<"number of doors in car : " <<ndoor <<endl;
     }
};
class Bike:public Vechile{
    public:
    int eng_cap;
     void acceptBike(){
        acceptVechile();
        cout <<"enter the capacity of the engine ";
        cin >>eng_cap;
    }
     void displayBike(){
        cout <<"\n brand of the vechile: " <<brand <<endl;
        cout <<"model of the vechile : " <<model <<endl;
        cout <<"capacity of the engine : " <<eng_cap <<endl;
     }

};
int main(){
    Car s1;
    Bike s2;
    cout <<"\n enter car details"<< endl;
    s1.acceptCar();
    s1.displayCar();
    cout <<"\n enter bike details"<< endl;
    s2.acceptBike();
    s2.displayBike();
    return 0;
}