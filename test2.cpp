#include <bits/stdc++.h>

using namespace std ;

class Company 
{
  private :
    string EmpName ;
    int salary ;
    
  public :
    Company ( string str1 , int sal )
    {
      EmpName = str1 ;
      salary = sal ;
    }
    
    Company ()
    {
      EmpName = "\0" ;
      salary = 0;
    }
     
     Company operator + ( Company obj2 );
    Company operator - ( Company obj2 );
     void display() ;
      void SetName();
     
} ;

Company Company :: operator +( Company obj2 )
{
 Company tmp ;
  tmp.salary = salary + obj2.salary  ; 
 return tmp ;
}

Company Company :: operator -( Company obj2 )
{
  Company tmp ;
  
  if( salary < obj2.salary )
    tmp.salary = obj2.salary - salary ;
  
  else
    tmp.salary = salary -obj2.salary ;
    
    return tmp ;
} 


void Company :: SetName()
{
  cout<<"enter the employee name :\n";
  getline( cin ,EmpName );
} 

void Company :: display()
{
  
  cout<<"employee name :"<<EmpName<< endl <<"salary = "<<salary<<endl ;
}

int main()
{
   Company emp1("nazmul" ,5000), emp2( "riyan " ,7000) ;
   Company emp3 ;
   emp3.SetName();
   
   emp3 = emp1 + emp2 ;
    cout <<"after '+' operator overloading :"<<endl;
   emp3.display() ;
   
    emp3 = emp1 - emp2 ;
    cout <<"\nafter '-' operator overloading :"<<endl;
   emp3.display() ;
 //  emp2.display() ;
 return 0;
}
