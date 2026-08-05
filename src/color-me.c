#include "color-me.h"
#include <stdio.h>

struct colors {
  const char *red;
  const char *blue;
  const char *green;
  const char *yellow;
  const char *magenta;
  const char *reset;
};

static struct colors colors = {
    "\033[31m", /* red     */
    "\033[34m", /* blue    */
    "\033[32m", /* green   */
    "\033[33m", /* yellow  */
    "\033[35m", /* magenta */
    "\033[0m",  /* reset   */
};

const char *color_me(color color, output position) {
  static _Thread_local char buf[64];
  snprintf(buf, sizeof(buf), "hi");

  return buf;
};

#define COLOR_ME_1(color) color_me(color, "fore")
#define COLOR_ME_2(color, position) color_me(color, position)
// #define COLOR_ME_3(color, position, brightness)                                \
  color_me(color, position, brightness)

#define GET_MACRO(_1, _2, NAME, ...) NAME
#define color_me(...)                                                          \
  GET_MACRO(__VA_ARGS__, COLOR_ME_2, COLOR_ME_1)(__VA_ARGS__)

int main() {
  // const struct colors *colorsPtr = &color_me;
  MAX_BUFFER_SIZE;

  // color_me(color "", output "")
  // color -> char array (char*) -> ASCII color name to use
  // output -> char array (char*) -> output position of the color
  // fore(foreground) or back (background)
  //
  // luminous -> char array (char*) -> color
  // should be bright (neon) or normal
  printf("%s color-me\n", color_me("red"));
  return 0;
}
