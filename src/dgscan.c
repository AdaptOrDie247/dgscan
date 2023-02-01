#include "../include/dgscan.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#define PROGRAM_AUTHOR "Daniel Gilbert"
#define PROGRAM_BINARY_NAME "dg-scan"
#define PROGRAM_NAME "DG Scan"
#define PROGRAM_VERSION "1.0"
int main(void) {
  dgscan_program* dgscan = dgscan_program_new();
  dgscan_main_init_program(dgscan);
  dgscan_program_print_banner(dgscan);
  dgscan_program_print_usage(dgscan);
  dgscan_program_free(dgscan);
  return 0;
}
void dgscan_main_init_program(dgscan_program* program) {
  dgscan_program_set_author(program, PROGRAM_AUTHOR);
  dgscan_program_set_binary_name(program, PROGRAM_BINARY_NAME);
  program->setName(program, PROGRAM_NAME);
  program->setVersion(program, PROGRAM_VERSION);
}
