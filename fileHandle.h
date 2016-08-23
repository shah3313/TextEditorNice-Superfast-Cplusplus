#ifndef FILEHANDLE_H_INCLUDED
#define FILEHANDLE_H_INCLUDED

#include <iostream>

class fileOpen
{
   public:
       void setFileOpened(std::string toWrite, std::string fileName);
       std::string readFile(std::string fileName);
};

#endif // FILEHANDLE_H_INCLUDED
