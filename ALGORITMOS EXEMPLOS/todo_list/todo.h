#ifndef TODO_H
#define TODO_H

#include <string>

using namespace std;

class todo
{
    private:
        string text;
    public:
        todo(string text);
        string get_text();
};

#endif // TODO_H
