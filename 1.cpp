#include<bits/stdc++.h>
#include<algorithm>
#include"hero.cpp" //including class from other file;

#define lli long long int
using namespace std;

int Hero::timeToComplete = 5; //to acces the static member outside the classs without creating object;

int main()
{
    Hero dev; // static allocation 
    dev.setHealth(100);
    dev.level = 'A';
    cout<<sizeof(dev)<<endl;
    cout<<dev.getHealth()<<endl;
    cout<<dev.getLevel()<<endl;
    // dev.print();

    //dynamic allocation 
    Hero* ujju = new Hero();
    ujju->level = 'B';
    ujju->setHealth(90);
    cout<<sizeof(ujju)<<endl;
    cout<<ujju->getHealth()<<endl;
    cout<<ujju->getLevel()<<endl;

    Hero naruto(70);
    naruto.setLevel('C');
    Hero sasuke(naruto); //copy constructor to make it equal to naruto


    Hero hero1(12);
    hero1.setLevel('D');
    char name[4] = "dev";
    hero1.setName(name);
    cout<<hero1.getName()<<endl;


    Hero hero2(hero1); // shallow copy --> given by default constructor
    cout<<hero2.getName()<<endl;

    hero1.name[0] = 'G';

    cout<<hero1.getName()<<endl;
    cout<<hero2.getName()<<endl; 

    Hero *temp = new Hero();
    delete(temp); 


    cout<<Hero::timeToComplete<<endl; //accessed a static data member and it gives same for every object;
    cout<<hero1.timeToComplete<<endl; //not advised but gives true result
    cout<<Hero::func()<<endl;
    return 0;
}