// color-me: the ASCII colors library for C
// Copyright (C) 2026  Ametrine Foundation

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

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
