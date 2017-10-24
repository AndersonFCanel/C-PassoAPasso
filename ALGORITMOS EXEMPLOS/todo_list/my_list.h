#ifndef MY_LIST_H
#define MY_LIST_H

template <class T>
class my_list
{
    public:
        T value;
        my_list<T>* next;
        my_list<T>* end;
        int size;

        my_list(T value);
        void add(T value);
        T get(int index);
        int get_size();
        void remove(int index);
        void clear();
};

template <class T> my_list<T>::my_list(T value = NULL)
{
    this->value = value;
    next = NULL;
    end = this;
    size = 0;
}

template <class T> void my_list<T>::add(T value)
{
    end = end->next = new my_list<T>(value);

    size++;
}

template <class T> T my_list<T>::get(int index)
{
    my_list<T>* current = this;

    for (int i = 0; i < index; i++)
        current = current->next;

    return current->next->value;
}

template <class T> int my_list<T>::get_size()
{
    return size;
}

template <class T> void my_list<T>::remove(int index)
{
    my_list<T>* current = this;

    for (int i = 0; i < index; i++)
        current = current->next;

    current->next = current->next->next;

    if (index == get_size() - 1)
        end = current;

    size--;
}

template <class T> void my_list<T>::clear()
{
        while (get_size() != 0)
            remove(0);
}

#endif // MY_LIST_H
