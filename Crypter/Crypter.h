//
// Created by Warnakulasuriya Charu on 03/05/2021.
//

#ifndef CRYPTER_CRYPTER_H
#define CRYPTER_CRYPTER_H

#include <iostream>


class Crypter {

public:
    std::string toCrypt_w(std::string, int skip);
    std::string decrypt(std::string, int skip);
    void cryptFiles(std::string);
    void decryptFile(std::string);
    void readFile(std::string);

};


#endif //CRYPTER_CRYPTER_H
