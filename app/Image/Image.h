#ifndef IMG2WAV_IMAGE_H
#define IMG2WAV_IMAGE_H

#include "opencv2/opencv.hpp"


class Image {
public:
    Image( std::string filename );
    char getValue( int x, int y );
    int width();
    int height();
protected:
    cv::Mat image;
};


#endif //IMG2WAV_IMAGE_H
