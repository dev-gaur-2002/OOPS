#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;

class Employee{

    public:
    string name;
    int hieght;

    void getter(){
        cout<<"I am a Employee";
    }
};

class Manager : public Employee{

};

class Hr : public Manager{

};