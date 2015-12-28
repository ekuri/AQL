#include "aql.h"

Aql::Aql(std::fstream &inputStream)
{
    tokenizeFromFstream(inputStream);
}

deque<deque<AqlToken> > Aql::tokenizeFromFstream(fstream &inputStream)
{
    deque<deque<AqlToken> > result;
    string fileData;
    while (!inputStream.eof()) {
        string buff;
        inputStream >> buff;
        fileData += buff + ' ';
    }
    //cout << fileData << endl << endl;
    // find all token
    unsigned int start = 0;
    unsigned int end = 0;
    while (true) {
        if (end >= fileData.length()) {
            break;
        }
        start = fileData.find_first_not_of(' ', (end == 0)?0:(end + 1));
        if (start >= fileData.length()) {
            break;
        }
        end = fileData.find_first_of(';', start);
        if (end >= fileData.length()) {
            end = fileData.length();
        }
        cout << "start: " << start << " length: " << end << endl;
        result.push_back(tokenizeSingleAqlFromString(fileData.substr(start, end - start)));
    }

    return result;
}

deque<AqlToken> Aql::tokenizeSingleAqlFromString(const string &data)
{
    deque<AqlToken> result;

    unsigned long start = 0;
    unsigned long end = 0;
    while (true) {
        if (end >= data.length()) {
            break;
        }
        start = end;
        end = data.find_first_of(' ', start);
        if (end >= data.length()) {
            end = data.length();
        }

        cout << "found: " << data.substr(start, end - start) << endl;
        result.push_back(AqlToken(data.substr(start, end - start), start, end));
    }

    return result;
}

