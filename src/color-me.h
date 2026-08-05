#ifndef COLORME_H
#define COLORME_H

// #define MAX_BUFFER_SIZE 2048

#ifndef __cplusplus
#include <stdbool.h>
#endif

typedef enum {
  // Normal Colors
  black,
  red,
  green,
  yellow,
  blue,
  magenta,
  cyan,
  white,

  // Bright colors
  black_bright,
  red_bright,
  green_bright,
  yellow_bright,
  blue_bright,
  magenta_bright,
  cyan_bright,
  white_bright,
} colors;
typedef enum { fore, back } output;

const char *color_me(colors color, output position);

#endif // COLORME_H
