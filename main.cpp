#include<iostream>

#include "number_bucket.h"
  using namespace std;

int main () {
  
 
Number_bucket < char > s; //class
  
for (int i = 0; i < 5; i++) //calculation stuff 
    {
      
s.push (65 + i); //push
    
} 
 
while (!s.isEmpty ()) 
    {
      
cout << s.top () << endl; 
      
s.pop ();
    
}
  
 
Number_bucket < int >n;
  
for (int i = 1; i <= 10; i++)
    {
      
n.push (i);
    
} 
cout << "Size of stack: " << n.getSize () << endl;
  
while (!n.isEmpty ())
    {
      
cout << n.top () << endl;
      
n.pop ();
    
}
  
 
return 0;

}
