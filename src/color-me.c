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

#include "color-me.h"
#include <stdio.h>

static const char *COLOR_FORE_STR[] = {
    // Normal colors
    [black] = "\033[30m",   /* black   ->  foreground  */
    [red] = "\033[31m",     /* red     ->  foreground  */
    [green] = "\033[32m",   /* green   ->  foreground  */
    [yellow] = "\033[33m",  /* yellow  ->  foreground  */
    [blue] = "\033[34m",    /* blue    ->  foreground  */
    [magenta] = "\033[35m", /* magenta ->  foreground  */
    [cyan] = "\033[36m",    /* cyan    ->  foreground  */
    [white] = "\033[37m",   /* white   ->  foreground  */

    // Bright colors
    [black_bright] = "\033[90m",   /* black   ->  foreground  */
    [red_bright] = "\033[91m",     /* red     ->  foreground  */
    [green_bright] = "\033[92m",   /* green   ->  foreground  */
    [yellow_bright] = "\033[93m",  /* yellow  ->  foreground  */
    [blue_bright] = "\033[94m",    /* blue    ->  foreground  */
    [magenta_bright] = "\033[95m", /* magenta ->  foreground  */
    [cyan_bright] = "\033[96m",    /* cyan    ->  foreground  */
    [white_bright] = "\033[97m",   /* white   ->  foreground  */
};
static const char *COLOR_BACK_STR[] = {
    // Normal colors
    [black] = "\033[40m",   /* black   ->  background  */
    [red] = "\033[41m",     /* red     ->  background  */
    [green] = "\033[42m",   /* green   ->  background  */
    [yellow] = "\033[43m",  /* yellow  ->  background  */
    [blue] = "\033[44m",    /* blue    ->  background  */
    [magenta] = "\033[45m", /* magenta ->  background  */
    [cyan] = "\033[46m",    /* cyan    ->  background  */
    [white] = "\033[47m",   /* white   ->  background  */

    // Bright colors
    [black_bright] = "\033[100m",   /* black   ->  background  */
    [red_bright] = "\033[101m",     /* red     ->  background  */
    [green_bright] = "\033[102m",   /* green   ->  background  */
    [yellow_bright] = "\033[103m",  /* yellow  ->  background  */
    [blue_bright] = "\033[104m",    /* blue    ->  background  */
    [magenta_bright] = "\033[105m", /* magenta ->  background  */
    [cyan_bright] = "\033[106m",    /* cyan    ->  background  */
    [white_bright] = "\033[107m",   /* white   ->  background  */
};

static const char *OUTPUT_POSITION[] = {
    [fore] = "fore",
    [back] = "back",
};

const char *color_me(colors color, output position) {
  static _Thread_local char buf[64];

  if (position == back) {
    const char *ansi_code = COLOR_BACK_STR[color];
    snprintf(buf, sizeof(buf), "%s", ansi_code);
  } else {
    const char *ansi_code = COLOR_FORE_STR[color];
    snprintf(buf, sizeof(buf), "%s", ansi_code);
  }

  return buf;
};

#define COLOR_ME_1(color) color_me(color, fore)
#define COLOR_ME_2(color, position) color_me(color, position)

#define GET_MACRO(_1, _2, NAME, ...) NAME
#define color_me(...)                                                          \
  GET_MACRO(__VA_ARGS__, COLOR_ME_2, COLOR_ME_1)(__VA_ARGS__)
