#include <unistd.h>

int main() {
  // Write the string to standard error.
  write(STDERR_FILENO, "that piece of art is useful\n", 27);

  // Return 1.
  return 1;
}
