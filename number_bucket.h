// Study Group 7 (Alex Milanez, John Edwin Karel Delgado, Ronell Sean Rulloda)

#ifndef ASSIGNMENT_1_NUMBER_BUCKET_H
#define ASSIGNMENT_1_NUMBER_BUCKET_H

class number_bucket {
public:
    number_bucket();
    number_bucket(int size);
    ~number_bucket();

    void push(int n);
    int pop();
    int peek();

    bool isEmpty();
    int getSize();

private:
    int *arr;
    int top;
    int size;
};

#endif //ASSIGNMENT_1_NUMBER_BUCKET_H