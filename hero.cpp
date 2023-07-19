#include<iostream>
using namespace std;

class Hero{
    //by default all the modifiers are private
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; //static keyword creates a keyword that is common to a class and doesnt requires an object to access i.

    Hero(){
        cout<<"constructor called"<<endl;
    }

    //parameterized constructor
    Hero(int health){
        this->health = health; //this is a pointer to the current object
    }

    //creating copy contructor
    Hero(Hero& temp){ // withuout & it gives an error because it tries to make a copy agar & nahi lagaya toh , fir copy contructor call hoga toh infinite recursive calls chali jaayengi
        
        char* c = new char[strlen(temp.name)+1];  //to create a deep copy;
        strcpy(c,temp.name);
        this->name = c;


        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }

    void setHealth(int temp){
        health = temp;
    }

    int getHealth(){
        return health;
    }

    void setLevel(char l){
        level = l; 
    }

    char getLevel(){
        return level;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    char* getName(){
        return this->name;
    }

    static int func(){ //can access only static members as it is not particular to the object.
        return timeToComplete;
    }

    ~Hero(){ //destructor  -> to free of the memory
        // it is only for statically created objects
        // for dynamically created objects we have to call it manually;
        cout<<" destructor called"<<endl;
    }
};