#include <iostream>
#include <fstream>
#include <string>

#include "aql.h"

using namespace std;

int main(int argc, char **argv)
{
//    if (argc != 3) {
//        cout << "Should be run as: " << argv[0] << " [aql input] [text input]" << endl;
//        return 0;
//    }

    //const char *aqlInputFileName = argv[1];
    const char *aqlInputFileName = "aql.test";
    fstream aqlInputFile(aqlInputFileName);

    if (aqlInputFile.is_open()) {
        Aql aql(aqlInputFile);
    } else {
        cout << "File: " << aqlInputFileName << " failed to open." << endl;
    }

    return 0;
}

