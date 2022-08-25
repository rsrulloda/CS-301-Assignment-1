#ifndef ASSIGNMENT_1_NUMBER_BUCKET_H
#define ASSIGNMENT_1_NUMBER_BUCKET_H

class number_bucket {
public:
    number_bucket();
    number_bucket(int n, int size, bool empty);

    bool ifEmpty();
    void push(int n);
    void pop();
    int get_size();

private:
    double n;
    int size;
    bool empty;
};

#endif //ASSIGNMENT_1_NUMBER_BUCKET_H