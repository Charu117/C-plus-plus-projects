//
// Created by Warnakulasuriya Charu on 26/04/2021.
//

#include "Vec.h"

std::vector<int> Vec::bubbleSort(std::vector<int> vec) {
    int temp;
    for (int i = 0; i < vec.size() - 1; i++){
        for (int j = 0; j < vec.size() - 1; j++) {
            if (vec.at(j) > vec.at(j+1)){
                temp = vec.at(j);
                vec.at(j) = vec.at(j+1);
                vec.at(j+1) = temp;
            }
        }

    }
    return std::vector<int>();
}

void Vec::stampa(std::vector<int> vec) {

}
