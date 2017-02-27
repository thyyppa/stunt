#ifndef IMG2WAV_MODULATOR_H
#define IMG2WAV_MODULATOR_H


#include <Image/Image.h>
#include <Terminal/Terminal.h>

class Modulator {
public:
    Modulator( Image image ) : image{ image }
    {};
    std::vector<int> generateSamples( Terminal &terminal );
    int pixel_width = 1000;
    int max_freq    = 21000;
    int min_freq    = 2000;
protected:
    Image image;
};


#endif //IMG2WAV_MODULATOR_H
