cmake_minimum_required( VERSION 3.6 )
project( stunt )

set( CMAKE_CXX_STANDARD 11 )

add_definitions( -DPROJECT_NAME="${PROJECT_NAME}" )

include_directories( app/ )

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

set( SOURCE_FILES main.cpp app/Wav/Wav.cpp app/Wav/Wav.h app/Image/Image.cpp app/Image/Image.h app/Modulator/Modulator.cpp app/Modulator/Modulator.h app/Terminal/Terminal.cpp app/Terminal/Terminal.h app/Terminal/Reporter.h )
add_executable( ${PROJECT_NAME} ${SOURCE_FILES} )

target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )