//
// Created by Warnakulasuriya Charu on 25/04/2021.
//

#include "Student.h"


int Student::getId() {
    return id;
}

void Student::setId(int id) {
    Student::id = id;
}

std::string &Student::getName() {
    return name;
}

void Student::setName(std::string &name) {
    Student::name = name;
}

std::string &Student::getSurname() {
    return surname;
}

void Student::setSurname(std::string &surname) {
    Student::surname = surname;
}

int Student::getAge() {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

std::string &Student::getCls() {
    return cls;
}

void Student::setCls(std::string &cls) {
    Student::cls = cls;
}

Student::Student(int id, std::string name, std::string surname, int age, std::string cls) : id(id), name(std::move(name)), surname(std::move(surname)), age(age), cls(std::move(cls)) {}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "{id: " << student.id << ", name: " << student.name << ", surname: " << student.surname << ", age: "
       << student.age << ", cls: " << student.cls << "}";
    return os;
}
