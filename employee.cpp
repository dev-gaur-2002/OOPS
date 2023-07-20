#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;


// ENCAPSULATION --->
/*
    to hide some information from the user
    fully encapsulated class --> only private members we can also make it read only
*/
class Temp{

    string name;
    int age;
    int hieght;

    public:
        int getAge(){
            return this->age;
        }

};