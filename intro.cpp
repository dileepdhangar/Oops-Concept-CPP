
// #include <iostream>
// using namespace std;

// //creation of class
// class Hero{
//     //properties:
//  private: // jab bhi kisi chij ko public mark krte hai to usko class ke bhar bhi access kr pate hai !
// int health ;

// public:
// // private: jab bhi kisi chij ko private mark krte hai to usko class ke under hi access kr pate hai class ke bhar nhi 
// char level ;

// // void print(){
// //     cout << level << endl ;
// // }
// int getHealth(){
//     return health ;
// }

// int setHealth(int h){
//     health = h ;
// }

// };


// int main()
// {

// //cration of object 
// //static allocation :
// Hero h1 ;
// cout << "size of h1 is :" << sizeof(h1)  << endl ;
// cout << "h1 health is : " << h1.getHealth() << endl ;
// h1.setHealth(900);
// // h1.health = 80;
// h1.level = 'A' ;
// cout << "health is: " << h1.getHealth() << endl ;
// cout << "level is: " << h1.level << endl ;

// return 0;

// }


// Dynamically allocation 

#include <iostream>
using namespace std;

//creation of class
class Hero{
  
private:
int health ;
public:
char level ;

int getHealth(){
    return health ;
}

int setHealth(int h){
    health = h ;
}

};


int main()
{
//statically allocation :
cout << "statically allocation : " << endl;
Hero h1 ;
h1.setHealth(800);
h1.level = 'A' ;
cout << "level is : " << h1.level << endl ;
cout << "h1 health is :" << h1.getHealth() << endl ;

cout << "dynamically allocation : " << endl;

Hero* h2 = new Hero ;
h2->setHealth(900) ;
h2->level = 'B' ;
cout << "level is : " << h2->level << endl ;
cout << "h1 health is :" << h2->getHealth() << endl ;


cout << " by usign * operator :" << endl ;
Hero *h3 = new Hero ;
(*h3).level = 'C';
(*h3).setHealth(400) ;
cout << "level is :" << (*h3).level <<endl ;
cout << "h3 health is :" << (*h3).getHealth() ;



// cout << "health is: " << h1->getHealth() << endl ;
// cout << "level is: " << h1->level << endl ;

return 0;
}

//how to access proprty/data members -> using "." operator 
//access modifier : public ,private , protected 
//Bydefault access modifier class ke under , private ala lga hota hai


// getter , setter type of function hote hai jo ki class ke under hote hhai unke dwara app classs ke variable ko access kr sakte hai !

// getter ke dwara fetch /read krte hai 
// setter ke dwara set krte hhai valuue // koi bhi conditionn lgana chahte ho to setter ka use krte hai 



// size int and char 4+1 = 5 ana chiye but aa aa rha hai size reason ? ?? 
// homwwork : padding and greedy alignment 

//Dynamic allocation :



