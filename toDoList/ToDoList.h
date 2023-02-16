//
// Created by Warnakulasuriya Charu on 25/04/2021.
//

#ifndef TODOLIST_TODOLIST_H
#define TODOLIST_TODOLIST_H

#include <iostream>
#include <vector>

class ToDoList {
private:
    std::string title;
    std::string description;
    std::string remark;

    static int countLinesFile;
    int countLines();

public:
    ToDoList();

    ToDoList(std::string &title,std::string &description,std::string &remark);

    std::string getTitle();

    void setTitle(std::string &string);

    std::string getDescription();

    void setDescription(std::string &description);

    std::string getRemark();

    void setRemark(std::string &remark);

    void updateFile(std::vector<ToDoList>);

    void readFile();

    void editList();

    void readFile(const std::string& searchByString);

    friend std::ostream &operator<<(std::ostream &os, const ToDoList &list);
};


#endif //TODOLIST_TODOLIST_H
