#include "../include/dgscan.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#define PROGRAM_AUTHOR "Daniel Gilbert"
#define PROGRAM_BINARY_NAME "dg-scan"
#define PROGRAM_NAME "DG Scan"
#define PROGRAM_VERSION "1.0"
int main(void) {
  Program* dgscan = Program_create();
  dgscan_main_init_program(dgscan);
  dgscan->printBanner(dgscan);
  dgscan->printUsage(dgscan);
  Program_destroy(dgscan);
  return 0;
}
void dgscan_main_init_program(Program* program) {
  program->setAuthor(program, PROGRAM_AUTHOR);
  program->setBinaryName(program, PROGRAM_BINARY_NAME);
  program->setName(program, PROGRAM_NAME);
  program->setVersion(program, PROGRAM_VERSION);
}
