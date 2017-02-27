#include <Wav/Wav.h>
#include <Image/Image.h>
#include <Modulator/Modulator.h>
#include <Terminal/Terminal.h>

int main( int argc, char **argv )
{
    std::string filename = argv[ 1 ];

    Image     image( filename );
    Modulator modulator( image );
    Terminal  terminal;


    Wav wav(
            filename.append( ".wav" ),
            modulator.generateSamples(terminal)
    );
}
