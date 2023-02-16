//
// Created by Warnakulasuriya Charu on 25/04/2021.
//

#ifndef APPROFONDIMENTO_STUDENT_H
#define APPROFONDIMENTO_STUDENT_H

#include <iostream>

class Student {
private:
    int id;
    std::string name;
    std::string surname;
    int age;
    std::string cls;

public:
    Student(int id, std::string name, std::string surname, int age, std::string cls);

    int getId();

    void setId(int id);

    std::string &getName();

    void setName(std::string &name);

    std::string &getSurname();

    void setSurname(std::string &surname);

    int getAge();

    void setAge(int age);

    std::string &getCls();

    void setCls(std::string &cls);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);
};


#endif //APPROFONDIMENTO_STUDENT_H
