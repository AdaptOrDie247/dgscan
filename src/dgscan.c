#include "../include/dgscan.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#define DGSCAN_PROGRAM_AUTHOR "Daniel Gilbert"
#define DGSCAN_PROGRAM_BINARY_NAME "dgscan"
#define DGSCAN_PROGRAM_NAME "DG Scan"
#define DGSCAN_PROGRAM_VERSION "1.0"
int main(void) {
  dgscan_program* dgscan = dgscan_program_new();
  dgscan_main_init_program(dgscan);
  dgscan_program_print_banner(dgscan);
  dgscan_program_print_usage(dgscan);
  dgscan_program_free(dgscan);
  return 0;
}
void dgscan_main_init_program(dgscan_program* program) {
  dgscan_program_set_author(program, DGSCAN_PROGRAM_AUTHOR);
  dgscan_program_set_binary_name(program, DGSCAN_PROGRAM_BINARY_NAME);
  dgscan_program_set_name(program, DGSCAN_PROGRAM_NAME);
  dgscan_program_set_version(program, DGSCAN_PROGRAM_VERSION);
}
