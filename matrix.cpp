#include <iostream>
#include "matrix.h"

int main() {
    Matrix matrix1(3, 3);

    double nums1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    matrix1.insert(nums1);
    matrix1.print();

    Matrix matrix2(3, 2);
    double nums2[] = {1, 2, 3, 4, 5, 6};
    matrix2.insert(nums2);
    matrix2.print();

    Matrix multipliedMatrix = matrix2.multiply(matrix2);
    multipliedMatrix.print();

    return 0;
}
