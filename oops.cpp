#include <iostream>
#include <string>
using namespace std;

class Teacher{
// pr;ivate:
//     float salary   //data hiding
public:

    string name;
    string dept;
    string subject;    
    // Teacher(){ //constructor gets called at the time of object creation
    //     dept = "science"; //initialization
    //     cout<<"hi i am bobby"<<endl;
    // }
   Teacher(string n,string s,string d){//parameterized constructor
        dept = d;
        name = n;
        subject = s;
   }
   void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"subject: "<<subject<< endl;
   }
    

    //methods
    // void changeDept(string newDept){
    //     dept = newDept;
    // }


};

int main(){
    // Teacher t1 ;
    Teacher t1("babita","math","english");
    // t1.name = "bob";
    // t1.subject = "biology";
    //t1.salary = 250000;
    //t1.getinfo();
    
    Teacher t2(t1); //default copy constructor
    t2.getinfo();
    return 0;
};