#include "Wav.h"

void Wav::generate( std::string filename, std::vector<int> samples )
{
    std::ofstream o( filename, std::ios::out | std::ios::binary );
    this->addHeader( o, samples.size());

    for ( int &sample : samples )
    {
        write_bytes( o, sample, 2 );
        write_bytes( o, sample, 2 );
    }
    o.close();
}

void Wav::addHeader( std::ofstream &o, int length )
{
    this->write_bytes( o, "RIFF", 4 );
    this->write_bytes( o, length * 4, 4 ); // chunk size
    this->write_bytes( o, "WAVEfmt ", 8 );
    this->write_bytes( o, 16, 4 ); // extension data
    this->write_bytes( o, 1, 2 ); // pcm samples
    this->write_bytes( o, 2, 2 ); // one channel
    this->write_bytes( o, 44100, 4 ); // samples per second
    this->write_bytes( o, 176400, 4 ); // sample rate * bits per sample * channels / 8 : example (44100 * 8 * 1 / 8)
    this->write_bytes( o, 4, 2 ); // block size (2 int per channel in bytes)
    this->write_bytes( o, 16, 2 ); // bits per sample
    this->write_bytes( o, "data", 4 );
    this->write_bytes( o, length * 4, 4 ); // chunk size
}

void Wav::write_bytes( std::ofstream &o, char *val, char bytes )
{
    o.write( val, sizeof( char ) * bytes );
}

void Wav::write_bytes( std::ofstream &o, int val, char bytes )
{
    o.write((char *) &val, sizeof( char ) * bytes );
}

Wav::Wav( std::string filename, std::vector<int> samples )
{
    this->generate( filename, samples );
}
