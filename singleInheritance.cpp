#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;

class Animal{

    public:
    string name;
    int hieght;

    void getter(){
        cout<<"I am a animal";
    }
};

class Dog : public Animal{

};