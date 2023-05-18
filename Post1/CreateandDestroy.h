#include <string>
using namespace std;
#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy {
public:
    CreateAndDestroy(int, string); // constructor
private:
    int objectID; // ID number for object
    string message; // message describing object
};

#endif