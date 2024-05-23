
#include <iostream>
using namespace std;

class student {

    private :
    string name ;
    int age ;
    int height ;

    public :
    int getAge() {
       return  this->age;
    }

    int setAge(int age){
        this->age = age ;
    }

} ;

int main()
{
  // object creation :
  student first ;
  first.setAge(400) ;
  cout << "sb shi hai !!"  << endl ; 
  cout << "student age :" << first.getAge() << endl ;


return 0;
}



//encapsulation
// data hide kr sakte hai , by private mark in the class 
// data hide -> secuirty purpose 

//information hiding /data hiding 
// wrapping up data member andn function 
// data member :: prperties / state 
// function :: methods/ behaviour 

// if want we can make class "read only", by ( mark private class , then only provide getter )
// code reusability 
// unit testing 
// managability 

