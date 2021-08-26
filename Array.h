//
// Created by Juan Prado on 25/08/21.
//

#ifndef DATASTRUCTURES_ARRAY_H
#define DATASTRUCTURES_ARRAY_H

#include <iostream>
#include <fstream>

#define MAX 50

class Array {
private:
    int numbers[MAX]{};
    int size = 0;

public:
    void insert(int number) {
        if (size < MAX) {
            numbers[size] = number;
            size++;
        } else {
            std::cout << "The array is full, can't insert the number" << std::endl;
        }
    }

    int remove() {
        int number = -1;
        if (size > 0) {
            number = numbers[size - 1];
            size--;
        } else {
            std::cout << "The array is empty, cannot erase an element" << std::endl;
        }
        return number;
    }

    void print() {
        for (int i = 0; i < size; ++i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }

    void read(const std::string& fileName) {
        int n, number;
        std::ifstream fs(fileName);
        if (fs.is_open()) {
            fs >> n;
            for (int i = 0; i < n; ++i) {
                fs >> number;
                insert(number);
            }
            fs.close();
        } else {
            std::cout << "Cannot open the file";
        }
    }
};

#endif //DATASTRUCTURES_ARRAY_H
