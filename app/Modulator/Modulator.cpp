#include "Modulator.h"

std::vector<int> Modulator::generateSamples( Reporter &reporter )
{
    std::vector<int> samples;

    float sample = 0;
    char  pixel  = 0;
    float freq   = 0;

    for ( int x = 0; x < image.width() / 3; ++x )
    {
        for ( int i = 0; i < pixel_width; ++i )
        {
            sample = 0;
            for ( int y = 0; y < image.height(); ++y )
            {
                pixel = image.getValue( x, y );
                freq  = y * (( max_freq - min_freq ) / image.height()) + min_freq;
                sample += sin( i * ( M_PI * 2 ) * freq / ( 44100 )) * ( pixel * ( 125 * this->power ));
            }
            samples.push_back( sample / image.height());
        }
        reporter.reportProgress((float) x / ( image.width() / 3 ));
    }
    return samples;
}
