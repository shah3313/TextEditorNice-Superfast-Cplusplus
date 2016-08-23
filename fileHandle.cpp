#include "fileHandle.h"
#include <iostream>
#include <fstream>

using namespace std;

// This create a new file and open it, then put in it the text
void fileOpen::setFileOpened(string toWrite, string fileName)
{
    ofstream fileOpened(fileName, ios::app); // Create and open new file (the fileName string contains also the path, getted by the file dialog. See instructions of save button for this)
    fileOpened << toWrite; // Write on the file
    fileOpened.close(); // Close it
    fileOpened.clear(); // Clear it
}

// This read the file opened
string fileOpen::readFile(string fileName)
{
    ifstream fileOpened(fileName); // As in the setFileOpened method the fileName string contains also the path by the file dialog, see the instructions of save button for this
    string words = ""; // New string variable
    if (fileOpened.good()) { getline(fileOpened, words); } // Save the text of file in the variable
    return words; // Return it
}
