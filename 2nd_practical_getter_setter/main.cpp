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
    Hero Ganesh;
    
    //without use of getter Setter
    //Ganesh.health = 70;
   //Ganesh.level = 'A';
    
    //use Setter
    Ganesh.setHealth(70);
    Ganesh.setLevel('A');
    
//cout << "health is :"  << Ganesh.health << endl;
    
    cout << "health is :"  << Ganesh.getHealth() << endl;
    
    cout << "level is :"  << Ganesh.getLevel() << endl;
    
    return(0);
}
