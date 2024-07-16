#include "enum.h"


void enum_demo()
{
    {
        Status s = Pending;
        s = Approved;

        FileError fe = FileError::notfound;
        fe = FileError::ok;
        NetworkError ne = NetworkError::disconnected;
        ne = NetworkError::ok;
    }
}

