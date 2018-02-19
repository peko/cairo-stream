#pragma once

unsigned char* buffer;
unsigned int 
    frame,                // frame count
    read_frame,           // read head
    write_frame,          // write head
    frame_size,           // size of frame in bytes
    buffer_size,          // whole buffer size in bytes
    buffer_length,        // number of frames in buffer
    w, h;                 // width and height

double fps;
