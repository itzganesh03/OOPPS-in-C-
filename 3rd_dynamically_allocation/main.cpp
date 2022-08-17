#include<iostream>

using namespace std;

class Hero{
    
    private:
    int health;
    
    public:
    char level;
    
    //getter and Setter

    int getHealth(){
        return health;
    }   
    
    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health = h;
    }
    
    void setLevel(char ch){
        level = ch;
    }
    
    
};

int main() {
    
    //Object Created
    // Hero Ganesh;
    
    //without use of getter Setter
    //Ganesh.health = 70;
   //Ganesh.level = 'A';
    
    //use Setter
    // Ganesh.setHealth(70);
    // Ganesh.setLevel('A');
    
//cout << "health is :"  << Ganesh.health << endl;
    // cout << "Size of Ganesh is :"  << sizeof(Ganesh) << endl;
    
    // cout << "health is :"  << Ganesh.getHealth() << endl;
    
    // cout << "level is :"  << Ganesh.getLevel() << endl;
    
    // **************************Practical:- 03 ******************************************************//
    
    //static_Allocation
    
    Hero a;
    
    a.setLevel('A');
    a.setHealth(80);
    cout << "static_Allocation level is :"  << a.level << endl;
    
    cout << "static_Allocation health is :"  << a.getHealth() << endl;
    
    cout << endl;
    
    
    // dynamicallly_Allocation
    
    Hero * b = new Hero;
    
    (*b).setLevel('B');
    (*b).setHealth(50);
    cout << "dynamicallly_Allocation level is :"  << (*b).level << endl;
    
    cout << "dynamicallly_Allocation health is :"  << (*b).getHealth() << endl;
    
    
    
    
    
    return(0);
}

