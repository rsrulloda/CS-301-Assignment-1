//
//John Delgado
//main.cpp 
//assignment 1
// August 24, 2022

#include <iostream>

#include "number_bucket.h"

using namespace std;

int main() {

number_bucket stackTest(10); //declare the instance of stack

char ch;

int n;

while(ch!='n')

{

cout<<"\nEnter choice\n 1. Check stack \n 2. push\n 3. pop\n 4. check size\n 5. peek\n";

cin>> ch;

switch(ch)

{

case '1':

stackTest.isEmpty();

break;

case '2':

cout<<"Enter desired nue: ";

cin >> n;

stackTest.push(n);

break;

case '3':

stackTest.pop();

break;

case '4':

cout << stackTest.getSize();

break;

case '5':

cout << stackTest.peek();

break;

}

cout<<"\nContinue? (y/n)";

cin>> ch;

}

return 0;

}
