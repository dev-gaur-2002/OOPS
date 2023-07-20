#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;


class Human{
    
    public:
    string name;
    int age;
    int wieght;

    void setWieght(int w){
        this->wieght = w;
    }

    int getWieght(){
        return this->wieght;
    }

    void printDetails(){
        cout<<this->name<<" "<<this->age<<" "<<this->wieght<<endl;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"man is sleeping"<<endl;
    }
};