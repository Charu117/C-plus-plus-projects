//
// Created by Warnakulasuriya Charu on 03/05/2021.
//

#include "Crypter.h"
#include <fstream>
#include <string>

std::string Crypter::toCrypt_w(std::string word, int skip) {
    //int skip = 25;
    std::size_t wordLength = std::strlen(word.c_str());
    std::string wordCrypted;
    for (int i = 0; i < wordLength; ++i) {
        if ((tolower(word[i]) >= 97 && tolower(word[i]) <= 122)) { // Salto W X Y Z (word[i] >= 65 && word[i] <= (90)
            int x = word[i] + skip;
            if(x > 122){
                wordCrypted.push_back(96 + (x - 122));
            }
            else{
                wordCrypted.push_back(x);
            }
        } else {
            wordCrypted.push_back(word[i]);
        }
    }

    //std::cout << wordCrypted <<std::endl;
    return wordCrypted;
}

std::string Crypter::decrypt(std::string word, int skip) {
    //int skip = 4;
    std::size_t wordLength = std::strlen(word.c_str()); // Rappresenta la lunghezza della stringa
    std::string wordCrypted;
    for (int i = 0; i < wordLength; ++i) {
            if ((tolower(word[i]) >= 97 && tolower(word[i]) <= 122)) { // Salto A B C D
                int x = word[i] - skip;
                if(x < 97){
                    wordCrypted.push_back(96 + (x - 122));
                }
            } else {
                wordCrypted.push_back(word[i]);
            }

    }

    return wordCrypted;
}


void Crypter::cryptFiles(std::string filename) {
    std::ofstream file1(filename + "Encrypted.txt");
    std::ifstream file2(filename);
    std::string line;
    std::string encrypted;

    while (std::getline(file2, line)){
        encrypted = toCrypt_w(line, 2);
        file1 << encrypted << " " <<std::endl;

    }

    file1.close();
    file2.close();

}

void Crypter::readFile(std::string filename) {
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)){
        std::cout << line <<std::endl;
    }

    file.close();
}

void Crypter::decryptFile(std::string filename) {
    std::ofstream file1("decrypted.txt");
    std::ifstream file2(filename);
    std::string line;
    std::string decrypted;

    while (std::getline(file2, line)){
        decrypted = decrypt(line, 2);
        file1 << decrypted << " " <<std::endl;

    }

    file1.close();
    file2.close();
}
