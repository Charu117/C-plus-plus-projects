#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>

using namespace std;
int main() {
    srand(time(NULL));
    vector<int> vec;
    int number;

    for (int i = 0; i < 10; ++i) {
        number = rand() % 100;
        vec.push_back(number);
    }

    for(int i = 0; i < vec.size(); ++i) {
        if (vec.at(i) % 2)
            cout<<vec.at(i)<<" E' un numero dispari"<<endl;
        else{
            cout<<vec.at(i)<<" E' un numero pari"<<endl;
        }
    }



    return 0;
}
