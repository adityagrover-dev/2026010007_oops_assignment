#include<iostream>
#include<string>
using namespace std;
class Academic{
    public:
    int marks;
    void acceptAcademic(){
        cout <<"enter the marks ";
        cin >>marks;
    }
};
class Sports{
    public:
    int score;
    void acceptSport(){
        cout <<"enter the score ";
        cin >>score;
    }
};
class Result:public Academic,public Sports{
    public:
    void display(){
        acceptAcademic();
        acceptSport();
        int result=marks+score;
        cout <<"\n academic marks : " <<marks <<endl;
        cout <<"sports score : " <<score <<endl;
        cout <<"total score / final result : " <<result <<endl;

    }

};
int main(){
    Result s;
    s.display();
    return 0;
}