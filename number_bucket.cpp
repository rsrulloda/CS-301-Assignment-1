//
// Created by ronel on 8/24/2022.
//

#include "number_bucket.h"

number_bucket::number_bucket() {
    n = 0;
    size = 0;
    empty = 0;
}

number_bucket::number_bucket(int n, int size, bool empty) {
    get_size(n);
    get_size(size);

}

bool number_bucket::ifEmpty() const {
    return false;
}
void number_bucket::push(int n) {

}
void number_bucket::pop() {

}
int number_bucket::get_size() {
    return size;
}