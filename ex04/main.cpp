#include <iostream>
#include <unistd.h>
#include <string>
#include <fstream>

bool fileExists( const std::string &Filename )
{
    return access( Filename.c_str(), 0 ) == 0;
}

void replace(std::string &str, const std::string &to_find, const std::string &to_replace) {
    int i;

    i = str.find(to_find);
    while (i != -1) {
        str.erase(i, to_find.length());
        str.insert(i, to_replace);
        i = str.find(to_find);
    }
}

int main(int argc, char **argv)
{
    std::string buffer;
    std::ifstream readfile;
    std::ofstream writefile;

    if (argc != 4) {
        std::cout << "Error: wrong amount of arguements";
        return 0;
    }

    if (!fileExists(argv[1])) {
        std::cout << "Error: file " + std::string(argv[1]) + " does not exist";
        return 0;
    }
    std::string filename(argv[1]);
    writefile.open(filename + ".replace");
    readfile.open(filename);
    while (std::getline(readfile, buffer)) {
        replace(buffer, argv[2], argv[3]);
        writefile << buffer;
        std::cout << readfile.peek() << std::endl;
    }
    writefile.close();
    readfile.close();
}
