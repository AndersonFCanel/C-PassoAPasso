#include "todo.h"

todo::todo(string text)
{
    this->text = text;
}

string todo::get_text()
{
    return text;
}
