#ifndef AQLTOKEN_H
#define AQLTOKEN_H

#include <string>

using namespace::std;

class AqlToken
{
public:
    AqlToken(const string &token, const int start, const int end);

private:
    string token;
    int start;
    int end;
};

#endif // AQLTOKEN_H
