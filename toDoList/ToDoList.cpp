//
// Created by Warnakulasuriya Charu on 25/04/2021.
//

#include "ToDoList.h"
#include <fstream>
#include <string>

//int countLinesFile = 0;

ToDoList::ToDoList(std::string &title, std::string &description, std::string &remark) : title(std::move(title)),description(std::move(description)), remark(std::move(remark)) {}

ToDoList::ToDoList() {}

std::string ToDoList::getTitle(){
    return title;
}


std::string ToDoList::getDescription(){
    return description;
}

void ToDoList::setDescription(std::string &description) {
    ToDoList::description = description;
}

std::string ToDoList::getRemark(){
    return remark;
}

void ToDoList::setRemark(std::string &remark) {
    ToDoList::remark = remark;
}


std::ostream &operator<<(std::ostream &os, const ToDoList &list) {
    os << "\n{title: " << list.title << ", description: " << list.description << ", remark: " << list.remark << " }\n";
    return os;
}

void ToDoList::updateFile(std::vector<ToDoList> list) {
    std::ofstream fp("./todo.txt", std::fstream::app);

    for (auto & i : list) {
        fp << i.getTitle() << ";" << i.getDescription() << ";" << i.getRemark() << "\n";
    }

    fp.close();
}

int ToDoList::countLines(){
    std::ifstream fp("./todo.txt");
    std::string line;
    int lines;

    while (std::getline(fp, line)){
        lines++;
    }

    fp.close();

    return lines;
}

void ToDoList::readFile(){
    std::ifstream fp("./todo.txt");
    std::string line;

    while (std::getline(fp, line)){
        std::cout << line << std::endl;
        countLinesFile++;
    }

    fp.close();
}
void ToDoList::readFile(const std::string& searchByString) {
    std::ifstream fp("./todo.txt");
    std::string line;
    std::size_t string;

    while (std::getline(fp, line, '\n')){
        string = line.find(searchByString);
        if (string != std::string::npos)
            std::cout << line << std::endl;
        //else std::cout << "line deleted" << std::endl;

    }

    fp.close();
}

void ToDoList::editList() {
    std::ofstream fp("./todo.txt", std::fstream::app);


}

void ToDoList::setTitle(std::string &string) {

}



