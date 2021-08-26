#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    Array array;
    int number;
    array.read("/Users/juanprado/CLionProjects/DataStructures/numbers.txt");
    cout << "Read numbers are: ";
    array.print();
    number = array.remove();
    cout << "The removed element is: " << number << endl;
    cout << "The new array is: ";
    array.print();
    return 0;
}
