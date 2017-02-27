#ifndef STUNT_MODULATOR_H
#define STUNT_MODULATOR_H


#include <Image/Image.h>
#include <Reporter/Reporter.h>

class Modulator {
public:
    Modulator( Image image ) : image{ image }
    {};
    std::vector<int> generateSamples( Reporter &reporter );
    int pixel_width = 1000;
    int max_freq    = 21000;
    int min_freq    = 2000;
    float power       = 1.0;
protected:
    Image image;
};


#endif //STUNT_MODULATOR_H
