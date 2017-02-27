#ifndef SNAKESONAPLANE_TERMINAL_H
#define SNAKESONAPLANE_TERMINAL_H

#include <cstdio>
#include <sys/ioctl.h>
#include <zconf.h>

class Terminal {
public:
    Terminal();
    void reportProgress( float progress );
protected:
    int terminal_width;
};


#endif //SNAKESONAPLANE_TERMINAL_H
