#ifndef STUNT_WAV_H
#define STUNT_WAV_H


#include <vector>
#include <fstream>

class Wav {
public:
    Wav( std::string filename, std::vector<int> samples );
protected:
    void generate( std::string filename, std::vector<int> samples );
    void addHeader( std::ofstream &o, int length );
    void write_bytes( std::ofstream &o, char *val, char bytes = 1 );
    void write_bytes( std::ofstream &o, int val, char bytes = 1 );
};


#endif //STUNT_WAV_H
