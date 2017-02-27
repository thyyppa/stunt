#include "Terminal.h"

Terminal::Terminal()
{
    struct winsize size;
    ioctl( STDOUT_FILENO, TIOCGWINSZ, &size );
    this->terminal_width = size.ws_col - 10;
}

void Terminal::reportProgress( float progress )
{
    printf( " %3.0f%% |", progress * 100 );
    int       count = progress * (float) this->terminal_width;
    for ( int i     = 0; i < count; ++i )
    {
        printf( "#" );
    }
    for ( int j     = 0; j < ( this->terminal_width - count ); ++j )
    {
        printf( " " );
    }
    printf( "|\r" );
}
