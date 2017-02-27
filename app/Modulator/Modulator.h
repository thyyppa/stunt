#ifndef STUNT_MODULATOR_H
#define STUNT_MODULATOR_H


#include <Image/Image.h>
#include <Reporter/Reporter.h>

class Modulator {
public:
    Modulator( Image image ) : image{ image }
    {};
    std::vector<int> generateSamples( Reporter &reporter );
    int   pixel_width = 5000;
    int   max_freq    = 22000;
    int   min_freq    = 500;
    float power       = 0.75;
protected:
    Image image;
};


#endif //STUNT_MODULATOR_H
