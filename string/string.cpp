#include <cstring>
#include <cassert>
#include "string.h"

String::String()
{
    this->str = new char[1];
    this->str[0] = '\0';
    this->len = 0;
}

String::String(const char *s)
{
    this->str = new char[strlen(s)+1];
    assert(this->str);
    strcpy(this->str, s);
   
    this->len = strlen(s);
}

String::String (const String ths)
{
    this->str = new char[rhs.len + 1];
    assert(this->str);
    strcpy(this->str, rhs.str);

    this->len = rhs.len;
}

String::String()
{
    delete [] this->str;
}

String& String::operator=(const String& rhs)
{
    delete [] this->str;
    this->Str= new int[rhs.len];
    assert(this->str);
    strcpy(this->str, rhs, str);

    this->len = rhs.len;

    return *this;
}

bool String::operator==(const String& rhs) 
{
    return strcmp(this-<str, rhs.str) == 0;
}

const char *String::c_str()
{
    return this->str;
}