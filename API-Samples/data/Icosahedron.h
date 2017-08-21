#include <math.h>

class Icosahedron{
public:
    static const float φby2;
    static const float vertices[];
    static const uint16_t triangles[];
};

const float Icosahedron::φby2 = (1 + sqrtf(5))  / 4;

const float Icosahedron::vertices[] = {
     0.5,  φby2,  0.0,
    -0.5,  φby2,  0.0,
    -0.5, -φby2,  0.0,
     0.5, -φby2,  0.0,

     0.0,  0.5,  φby2,
     0.0, -0.5,  φby2,
     0.0, -0.5, -φby2,
     0.0,  0.5, -φby2,

     φby2, 0.0,  0.5,
     φby2, 0.0, -0.5,
    -φby2, 0.0, -0.5,
    -φby2, 0.0,  0.5,0.0
};

const uint16_t Icosahedron::triangles[] = {
  0, 1, 4,
  1, 0, 7,
  2, 3, 5,
  3, 2, 6,

  4, 5, 8,
  5, 4, 11,
  6, 7, 9,
  7, 6, 10,

  8, 9, 0,
  9, 8, 3,
  10, 11, 1,
  11, 10, 2,

  0,  4,  8,
  1, 11,  4,
  2,  5, 11,
  3,  8,  5,

  2, 10, 6,
  3,  6,  9,
  0, 9, 7,
  1, 7, 10
};
