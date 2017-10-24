#include "todo_manager.h"

my_list<todo*>* todo_manager::get_current()
{
    return &current;
}

my_list<todo*>* todo_manager::get_future()
{
    return &future;
}

my_list<todo*>* todo_manager::get_completed()
{
    return &completed;
}

void todo_manager::add(my_list<todo*>* todos, string text)
{
    if (text.length() > 0)
        todos->add(new todo(text));
}

void todo_manager::add_current(string text)
{
    add(get_current(), text);
}

void todo_manager::add_future(string text)
{
    add(get_future(), text);
}

void todo_manager::add_completed(string text)
{
    add(get_completed(), text);
}

void todo_manager::move_to(my_list<todo*>* source, my_list<todo*>* destination, int index)
{
    todo* t = source->get(index);

    source->remove(index);

    destination->add(t);
}

void todo_manager::move_to_future(int index)
{
    move_to(get_current(), get_future(), index);
}

void todo_manager::complete(my_list<todo*>* source, int index)
{
    move_to(source, get_completed(), index);
}

void todo_manager::complete_current(int index)
{
    complete(get_current(), index);
}

void todo_manager::complete_future(int index)
{
    complete(get_future(), index);
}

void todo_manager::remove(my_list<todo*>* source, int index)
{
    delete source->get(index);

    source->remove(index);
}

void todo_manager::remove_current(int index)
{
    remove(get_current(), index);
}

void todo_manager::remove_future(int index)
{
    remove(get_future(), index);
}

void todo_manager::remove_completed(int index)
{
    remove(get_completed(), index);
}
