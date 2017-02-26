#ifndef IMG2WAV_WAV_H
#define IMG2WAV_WAV_H


#include <vector>
#include <fstream>

class Wav {
public:
    Wav( std::string filename, std::vector<int> samples );
    char *filename = "test.wav";
    int  pixel_len = 10; //samples
    int  height    = 200;
    int  max_hz    = 20000;
    int  min_hz    = 5000;
    int  len       = 10; //seconds
protected:
    void generate( std::string filename, std::vector<int> samples );
    void addHeader( std::ofstream &o, int length );
    void write_bytes( std::ofstream &o, char *val, char bytes = 1 );
    void write_bytes( std::ofstream &o, int val, char bytes = 1 );
};


#endif //IMG2WAV_WAV_H
