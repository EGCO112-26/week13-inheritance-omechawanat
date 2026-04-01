#include <iostream>
using namespace std;
#include "student.h"

int main(){
  MU_person m(999);
  m.display_person(); //id

  student m1(6613121,2,"Vivi",666),m2(114),m3;
  //m1.display(); // id gpa name
  m1.display();
  m2.display();
  m3.display();
// student m1(6613118,3.9,"Atom");
//student m2(6613112),m3,*p;

  cout<<endl<<"======="<<endl;
//  p=new student(6613265,1.7,"Hok");
 // delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa