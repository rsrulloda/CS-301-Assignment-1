// Study Group 7 (Alex Milanez, John Edwin Karel Delgado, Ronell Sean Rulloda)

#include "number_bucket.h"
#include <iostream>

number_bucket::number_bucket() {
    arr = new int[10];
    size = 0;
    top = -1;
}

number_bucket::number_bucket(int size1) {
    arr = new int[size1];
    size = size1;
    top = -1;
}

number_bucket::~number_bucket() {
    delete[] arr;
}

void number_bucket::push(int n) {
    if(isFull()) {
        std::cout << "Cannot Push. ";
    } else {
        arr[++top] = n;
    }
}

int number_bucket::pop() {
    if(isEmpty()) {
        return 0;
    } else {
        return arr[top--];
    }
}

int number_bucket::peek() {
    if (isEmpty()) {
        return 0;
    }
    else {
        return arr[top];
    }
}

bool number_bucket::isEmpty() const{
    return (top < 0);
}

bool number_bucket::isFull() const {
    return top == size -1;
}

int number_bucket::getSize() const{
    return top + 1;
}