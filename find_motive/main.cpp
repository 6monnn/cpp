#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream file;
    string path = argv[1];
    string motive = argv[2];
    file.open(path);
    if (file.fail()) {
        cout << "The file " << path << " could not be opened.\n";
        return 1;
    }
    int c = 0;
    do {
        string subs;
        file >> subs;
        if(subs.find(motive) != string::npos)
            c++;
 
    } while (file);

    cout << "The file " << path << " contains " << c << " words containing the motive "<< motive <<"\n";
    return 0;
}