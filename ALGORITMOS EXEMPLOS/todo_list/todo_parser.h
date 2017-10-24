#ifndef TODO_PARSER_H
#define TODO_PARSER_H

#include <string>
#include "todo_manager.h"

using namespace std;

class todo_parser
{
    public:
        static void parse_data(todo_manager* t_mgr, string data);
};

#endif // TODO_PARSER_H
