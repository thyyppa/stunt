#include "Image.h"

Image::Image( std::string filename )
{
    this->image = cv::imread( filename, CV_LOAD_IMAGE_COLOR );
    cv::cvtColor( this->image, this->image, CV_BGR2GRAY );
}

char Image::getValue( int x, int y )
{
    return this->image.at<cv::Vec3b>( this->image.rows - y, x )[ 0 ];
}

int Image::width()
{
    return this->image.cols;
}

int Image::height()
{
    return this->image.rows;
}
