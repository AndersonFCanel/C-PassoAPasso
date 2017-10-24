#include <string>
#include "todo_parser.h"

void todo_parser::parse_data(todo_manager* t_mgr, string data)
{
    int index = data.find(" ");

    string status = data.substr(0, index);

    string text = data.substr(index + 1, data.length());

    if (status == "current")
        t_mgr->add_current(text);

    else if (status == "future")
        t_mgr->add_future(text);

    else if (status == "completed")
        t_mgr->add_completed(text);
}
