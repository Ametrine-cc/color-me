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

#include "../src/color-me.h"
#include <stdio.h>

int main(void) {
  // color_me(color "", output "")
  // color -> enum(color name) -> ASCII color name to use
  // output -> enum(fore or back) -> output position of the color
  // fore(foreground) or back (background)
  //
  // luminous -> char array (char*) -> color
  // should be bright (neon) or normal
  // black_bright -> gray
  printf("%s%scolor-me\n", color_me(white, fore), color_me(black_bright, back));
  return 0;
}
