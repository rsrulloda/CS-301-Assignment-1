//
//John Delgado
//main.cpp 
//assignment 1
// August 24, 2022

#include <iostream>

#include "number_bucket.h"

using namespace std;

int main() {

number_bucket stackTest; //declare the instance of stack

char ch;

int n;

while(ch!='n')

{

cout<<"\nEnter choice\n 1. Check stack \n 2. push\n 3.pop\n 4. check size\n";

cin>> ch;

switch(ch)

{

case '1':

stackTest.ifEmpty();

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

stackTest.get_size();

break;

}

cout<<"\nContinue? (y/n)";

cin>> ch;

}

return 0;

}