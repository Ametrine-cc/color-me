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
