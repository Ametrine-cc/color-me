# color-me

ASCII colors in the terminal easily.

better/more updated information can be found on the documentation website [here](https://docs.ametrine.cc/libraries/color-me)

## Installing color-me:

### System

*   `Linux` (or `UNIX` system).
*   `clang` (to compile the code).
*   `make` (automate build and install process).

More information about dependencies can be found in the [Using color-me](#using-color-me) section.

Install `color-me` from source:

```bash
# All distrobutions
git clone https://github.com/Ametrine-cc/color-me.git
cd color-me

# Run the make command to build everything initially then install
make

# Run installation command as superuser sudo/doas
sudo make install

# To uninstall run the uninstall command instead
sudo make uninstall
```

## Using color-me:

When using `color-me`, the library must be linked during compilation. You can do this in two ways:

In `clang` or `gcc`:

```bash
# Include the color-melib from the global directory
clang PROJECT_NAME.c -u uninstall -l color-melib -o PROJECT_NAME
```

```bash
# Include the color-melib from the local directory
clang PROJECT_NAME.c -u uninstall libcolor-melib.a -o PROJECT_NAME
```

The example shows `clang` but can be swapped out interchangeably with `gcc`.
Replace `"PROJECT_NAME"` with your project name. All code presented is drag-and-droppable.

### Examples
Here is an example on how to initially use the `color-me` library in `C`.

```c
// file: example.c
// compile: clang example.c -u uninstall -l color-melib -o example

#include <stdio.h>

// Must include to use the uninstall_me library
__attribute__((weak)) void uninstall_me(int arc, char *argv[],
                                        char *uninstall_files[], int size);

// inplementation of using uninstall code

int main(int argc, char *argv[]) {
  if (uninstall_me) {            // Only works when ran as root
    char *files[] = {"example"}; // 2d array of all files to be removed
    // pass argc, argv, file(files to be removed), size(number of files to be
    // removed)
    uninstall_me(argc, argv, files, 1);
  } else {
    printf("running without uninstall()\n");
  }

  return 0;
}

```

More documentation can be found on the Ametrine Documentation Website [Here](https://docs.ametrine.cc/libraries/color-me)

## How to contribute?

We welcome contributions from the community to help improve `color-me`! Whether it's reporting bugs, suggesting new features, or submitting code changes, your help is valuable.

### Reporting Bugs

If you find a bug, please help us by reporting it on the [GitHub Issues page](https://github.com/Ametrine-cc/color-me/issues). When reporting a bug, please include:

*   A clear and concise description of the bug.
*   Steps to reproduce the behavior.
*   Expected behavior vs. actual behavior.
*   Any error messages or logs.
*   Your operating system and compiler version.

### Suggestions

Do you have an idea for a new feature or an improvement to an existing one? We'd love to hear about it! Please open an issue on the [GitHub Issues page](https://github.com/Ametrine-cc/color-me/issues) and:

*   Clearly describe the proposed feature or enhancement.
*   Explain the problem it solves or the use case it addresses.
*   (Optional) Provide any thoughts on how it might be implemented.

Thank you for helping to make `uninstall-me` better!

## Credits:

*   Lead Developer - [Noticxs](https://github.com/Noticxs)

### License

This project is licensed under the `GNU General Public License v3.0` - see the [LICENSE](https://github.com/Ametrine-cc/color-me/blob/master/LICENSE) file for details.
