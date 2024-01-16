#include <stdio.h>

int main() {
  // ANSI escape codes for colors
  printf("\033[1;36m");  // Set text color to bold cyan for borders and name
  printf("--------------------\n");
  printf("<  bladerunner020  >\n");
  printf("--------------------\n");
  printf("\033[0m");  // Reset color to default

  // ANSI escape codes for colors
  printf(
      "\033[1;33m");  // Set text color to bold yellow for the cat-like creature
  printf(" \\       /\n");
  printf("  \\     /\n");
  printf("    .--.\n");
  printf("   |o_o  |\n");
  printf("   |:_/  |\n");
  printf("  //    \\ \\\n");
  printf(" (|      | )\n");
  printf(" /'\\_   _/'\\\n");
  printf(" \\___)=(___/\n");
  printf("\033[0m");  // Reset color to default

  return 0;
}
