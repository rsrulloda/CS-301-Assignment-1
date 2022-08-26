// Study Group 7 (Alex Milanez, John Edwin Karel Delgado, Ronell Sean Rulloda)

#include "number_bucket.h"
#include <iostream>

number_bucket::number_bucket() {
    arr = new int[0];
    size = 0;
    top = -1;
}

number_bucket::number_bucket(int size) {
    arr = new int[size];
    this->size = size;
    top = -1;
}

number_bucket::~number_bucket() {
    delete[] arr;
}

void number_bucket::push(int n) {
    if(!isEmpty()) {
        throw "Stack is full";
    } else {
        arr[++top] = n;
    }
}

int number_bucket::pop() {
    if(isEmpty()) {
        throw "Stack is empty";
    } else {
        return arr[top--];
    }
}

int number_bucket::peek() {
    if (isEmpty()) {
        throw "Stack is empty";
    }
    else {
        return arr[top];
    }
}

bool number_bucket::isEmpty()  {
    return (top < 0);
}

int number_bucket::getSize() {
    return top + 1;
}