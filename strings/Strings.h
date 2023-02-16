//
// Created by Warnakulasuriya Charu on 28/04/2021.
//

#ifndef STRINGS_STRINGS_H
#define STRINGS_STRINGS_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

class Strings {

public:
    void menu(int sel);
    void fillArr(char alpha[], int dimAlpha);
    void convertStr(char str[], int size);
    int strlength(char str[]);

    void countChar(char structure[], char str[], int len);
    void compareLen(char str1[], char str2[]);

    void strInvert(char str[]);
    void decToBin(char num[]);
};


#endif //STRINGS_STRINGS_H
