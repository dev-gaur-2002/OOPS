#include<bits/stdc++.h>
#include<algorithm>
#include"hero.cpp" //including class from other file;
#include "employee.cpp" 
#include "human.cpp"
#include "singleInheritance.cpp"
#include "multilevel.cpp"
#include "Multiple.cpp"
#include "operatorOverloading.cpp"

#define lli long long int
using namespace std;

int Hero::timeToComplete = 5; //to acces the static member outside the classs without creating object;

int main()
{
    // Hero dev; // static allocation 
    // dev.setHealth(100);
    // dev.level = 'A';
    // cout<<sizeof(dev)<<endl;
    // cout<<dev.getHealth()<<endl;
    // cout<<dev.getLevel()<<endl;
    // // dev.print();

    // //dynamic allocation 
    // Hero* ujju = new Hero();
    // ujju->level = 'B';
    // ujju->setHealth(90);
    // cout<<sizeof(ujju)<<endl;
    // cout<<ujju->getHealth()<<endl;
    // cout<<ujju->getLevel()<<endl;

    // Hero naruto(70);
    // naruto.setLevel('C');
    // Hero sasuke(naruto); //copy constructor to make it equal to naruto


    // Hero hero1(12);
    // hero1.setLevel('D');
    // char name[4] = "dev";
    // hero1.setName(name);
    // cout<<hero1.getName()<<endl;


    // Hero hero2(hero1); // shallow copy --> given by default constructor
    // cout<<hero2.getName()<<endl;

    // hero1.name[0] = 'G';

    // cout<<hero1.getName()<<endl;
    // cout<<hero2.getName()<<endl; 

    // Hero *temp = new Hero();
    // delete(temp); 


    // cout<<Hero::timeToComplete<<endl; //accessed a static data member and it gives same for every object;
    // cout<<hero1.timeToComplete<<endl; //not advised but gives true result
    // cout<<Hero::func()<<endl;

    // Male dev;
    // cout<<dev.age<<endl;
    // cout<<dev.color<<endl;
    // dev.sleep();

    // cout<<dev.wieght<<endl;
    // dev.setWieght(100);
    // cout<<dev.wieght<<endl;

    // Dog shubham; // doggy boyyy XDD
    // shubham.getter();
    // Hr shubham;
    // shubham.getter();

    // Neko nekochan;
    // nekochan.Cats ::getter(); // this is used to sort out the ambiguity if there are 2 function names same for a class that inherits 2 classes
    // nekochan.Pets :: getter();
    // nekochan.getterCats();

    Op a,b;
    a+b;

    return 0;
}


// learn about 

// padding 
//const keyword
//initialisation list
