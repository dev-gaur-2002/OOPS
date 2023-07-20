#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;


// hierarchiechal is just opposite of Multiple in this, there are 2 or more classes that inherit a single class;
class Pets{

    public:
    string name;
    int hieght;

    void getter(){
        cout<<"I am a Pet"<<endl;
    }
};

class Cats{

    public:
    string name;
    int hieght;

    void getter(){
        cout<<"getter for cats "<<endl;
    }
    void getterCats(){
        cout<<"I am a cat";
    }

};

class Neko : public Pets,public Cats{

};