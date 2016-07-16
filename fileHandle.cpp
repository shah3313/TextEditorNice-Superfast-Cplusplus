#include "fileHandle.h"
#include <iostream>
#include <fstream>

using namespace std;

fileOpen::fileOpen()
{
    file++;
}

void fileOpen::setFileOpened(string toWrite, string fileName)
{
    ofstream fileOpened(fileName, ios::app);
    fileOpened << toWrite;
    fileOpened.close();
    fileOpened.clear();
}

fileOpen::~fileOpen()
{
    file--;
}

string fileOpen::readFile(string fileName)
{
    ifstream fileOpened(fileName);
    string words="";

    while (fileOpened.good())
    {
        getline(fileOpened, words);
    }

    return words;
}
