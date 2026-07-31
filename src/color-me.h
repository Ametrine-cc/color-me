#ifndef COLORME_H
#define COLORME_H

#define MAX_BUFFER_SIZE 2048

struct colors {
  const char *blue;
  const char *green;
  const char *yellow;
  const char *red;
  const char *magenta;
  const char *reset;
};

const struct colors color_me = {
    "\033[34m", /* blue */
    "\033[32m", /* green */
    "\033[33m", /* yellow */
    "\033[31m", /* red */
    "\033[35m", /* magenta */
    "\033[0m",  /* reset */
};

#endif // COLORME_H
