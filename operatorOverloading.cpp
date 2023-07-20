
#include<bits/stdc++.h>
#include<algorithm>
#define lli long long int
using namespace std;

class Op{
    public:
    int a=10;
    int b=5;

    int add(){
        return a+b;
    }

    void operator + (Op &obj){
        int val1 = this->a;
        int val2 = obj.a;

        cout<<val1-val2;
    }
};
