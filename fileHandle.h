#ifndef FILEHANDLE_H_INCLUDED
#define FILEHANDLE_H_INCLUDED

#include <iostream>

class fileOpen
{
    int file=0;
   public:
       fileOpen();
       void setFileOpened(std::string toWrite, std::string fileName);
       ~fileOpen();
       std::string readFile(std::string fileName);
};

#endif // FILEHANDLE_H_INCLUDED
