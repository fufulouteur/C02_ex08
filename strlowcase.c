#include <stdio.h>

char *ft_strlowcase(char *str) {
  char *str2;

  str2 = str;
  while (*str) {
    if (*str >= 'A' && *str <= 'Z') {
      *str += 32;
    }
    str++;
  }
  return str2;
}
