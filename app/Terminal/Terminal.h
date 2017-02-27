#ifndef STUNT_TERMINAL_H
#define STUNT_TERMINAL_H

#include <cstdio>
#include <sys/ioctl.h>
#include <zconf.h>
#include <Reporter/Reporter.h>

class Terminal : public Reporter {
public:
    Terminal();
    void reportProgress( float progress );
protected:
    int terminal_width;
};


#endif //STUNT_TERMINAL_H
