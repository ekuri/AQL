#ifndef AQL_H
#define AQL_H

#include <fstream>
#include <deque>
#include <string>
#include <iostream>
#include "aqltoken.h"

using namespace::std;

class Aql
{
public:
    Aql(std::fstream &inputStream);

private:
    deque<deque<AqlToken> > tokenizeFromFstream(std::fstream &inputStream);
    deque<AqlToken> tokenizeSingleAqlFromString(const string &data);
};

#endif // AQL_H
