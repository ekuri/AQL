#include "aqltoken.h"

AqlToken::AqlToken(const string &token, const int start, const int end)
{
    this->token = token;
    this->start = start;
    this->end = end;
}

