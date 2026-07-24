#include<bits/stdc++.h>
using namespace std ; 

class Teacher { 
private : // Members of a class are private by default. 
    double salary ; 

public: 
    // Public members can be accessed from outside the class.
    string name ;          
    string dept ; 
    string subject ; 

    void changedept (string newdept ){
        dept = newdept ; 
    }


    // Setter and Getter are used to access private data safely.
    // Setter function to assign salary
    void setsalary( double s ){
        salary = s ; 
    }
    
    // Getter function to return salary
    double getsalary(){
        return salary ; 
    }
} ;

int main (){

    Teacher t1 ; 
    
    t1.name = "Jitu" ; 
    t1.subject = "C++" ; 
    t1.dept = "Computer Science " ; 
    // t1.salary = 25000 ; 

    t1.setsalary(25000) ;

    cout << t1.name << endl ; 
    cout << t1.getsalary() << endl ; 


    return 0 ; 

}