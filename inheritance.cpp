// Technically, inheritance is defined as the process of acquiring the features and behaviors of a class by another class.
/* #include <iostream>
using namespace std;

class Human{

     private:
     int height;
     int weight ;
     int age ;

     public:
     int getAge(){
        return this->age ;
     }
    void setweight(int w) {
         this->weight = w ;
    }

};

// child class
class Male: public Human {               // syntax  ,,  // class child_class : modeof inheritence  parent_class
    public:
    string color;

    void sleep(){
        cout << "male sleepinnnng" << endl ;
    }
    int getheight(){
        return this->height ;
    }
    void setHeight(int h ){
        this->height = h ;
    }
  };

int main()
{
   Male m1;
//    m1.setHeight(176) ;
//    cout << m1.getheight() << "   height access " << endl  ;
//cout << m1.height << endl ;


   /* Male object1;
   cout << "age " <<  object1.age << endl ;
   cout << "weight " << object1.weight << endl ;
   cout << "height " <<  object1.height << endl ;
   cout << object1.color << endl ;

   object1.setweight(87) ;
   cout << "weight  :" <<  object1.weight << endl ;
   object1.sleep() ;

return 0;

}

*/

// types of inheritance
// 1. single inheritance

/*#include <iostream>
using namespace std;
class Animal {

 public :
 int age = 67 ;
 int weight ;

 public:
 void speak(){
    cout << "speaking" << endl ;
 }

} ;


class Dog: public Animal {

};

int main()
{

Dog suzzi ;
suzzi.speak() ;
cout << suzzi.age << endl ;

return 0;
}

*/
// 02 multilevel inherit

/* #include <iostream>
using namespace std;
class Animal {

 public :
 int age = 67 ;
 int weight ;

 public:

 void speak(){
    cout <<  "speaking" << endl  ;
 }

} ;


class Dog: public Animal {

};

class Germanshepherd: public Dog {

} ;

int main()
{

Germanshepherd g ;
g.speak() ;

return 0;
}

*/

// third type :multiple inheritance :

#include <iostream>
using namespace std;
class Animal
{

public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barkinnnng " << endl;
    }
};

class Human
{   
    public : 
    string color ;
    public :
    void speak() {
        cout << "speaking " << endl ;
    }
};


//multile inheritanec krte hai 
class hybrid: public Animal, public Human {


} ;

int main()
{
    hybrid obj1 ;
    obj1.speak();
    obj1.bark() ;
    return 0;
}
