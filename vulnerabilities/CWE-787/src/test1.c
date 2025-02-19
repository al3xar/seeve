#include <stdio.h>
#include <string.h>

int main() {
  char buffer[10];
  strncpy(buffer, "This string is too long for the buffer", sizeof(buffer) - 1);
  buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination
  printf("Buffer content: %s\n", buffer);
  return 0;
}