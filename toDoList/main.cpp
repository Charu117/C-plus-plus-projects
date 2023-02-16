#include "ToDoList.h"
#include <vector>

using namespace std;

int main() {
    vector<ToDoList> list;
    ToDoList toDoList = ToDoList();
    string title;
    string description;
    string state;
    char condition = 'y';

    while ((condition == 'y') || (condition == 'Y')){
        cout << "Write the title: ";
        getline(cin, title);
        cout << "Write a description: ";
        getline(cin, description);
        state = "not done";

        //list.push_back(TodoList(title, description, state));
        list.emplace_back(title, description, state);

        cout << "Do you want to continue? (y/n) ";
        cin >> condition;

        fflush(stdin);
    }

    toDoList.updateFile(list);
    //toDoList.readFile(";not done"); //Sul file prima della stringa c'e' ;



    /*


    for (auto & i : list) {
        cout << i;
    }
     */

    return 0;
}
