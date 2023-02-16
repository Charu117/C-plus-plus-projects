#include <iostream>
#include "Crypter.h"


using namespace std;

int main() {

    Crypter crypter;

    string word = "wyx"; // tuvwxyzabc
    //cout << crypter.toCrypt_w(word, 3) << endl;

    cout << crypter.decrypt(word, 4) << endl; // qrstuvwxyz

    //word = "EFGHIJKLMNOPQRSTUVWXYZABCD";
    //cout << crypter.decrypt(word) << endl;

    //crypter.cryptFiles("paragraph");

    //crypter.decryptFile("paragraphEncrypted.txt");

    return 0;
}
