#ifndef TODO_MANAGER_H
#define TODO_MANAGER_H

#include <string>
#include "todo.h"
#include "my_list.h"

using namespace std;

class todo_manager
{
    private:
        my_list<todo*> current;
        my_list<todo*> future;
        my_list<todo*> completed;

    public:
        my_list<todo*>* get_current();
        my_list<todo*>* get_future();
        my_list<todo*>* get_completed();
        void add(my_list<todo*>* todos, string todo);
        void add_current(string text);
        void add_future(string text);
        void add_completed(string text);
        void move_to(my_list<todo*>* source, my_list<todo*>* destination, int index);
        void move_to_future(int index);
        void complete(my_list<todo*>* source, int index);
        void complete_current(int index);
        void complete_future(int index);
        void remove(my_list<todo*>* source, int index);
        void remove_current(int index);
        void remove_future(int index);
        void remove_completed(int index);
};

#endif // TODO_MANAGER_H
