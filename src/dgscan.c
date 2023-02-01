#include "../include/dgscan.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#define PROGRAM_AUTHOR "Daniel Gilbert"
#define PROGRAM_BINARY_NAME "dg-scan"
#define PROGRAM_NAME "DG Scan"
#define PROGRAM_VERSION "1.0"
int main(void) {
  Program* dg_scan = Program_create();
  Main_initProgram(dg_scan);
  dg_scan->printBanner(dg_scan);
  dg_scan->printUsage(dg_scan);
  Program_destroy(dg_scan);
  return 0;
}
void Main_initProgram(Program* program) {
  program->setAuthor(program, PROGRAM_AUTHOR);
  program->setBinaryName(program, PROGRAM_BINARY_NAME);
  program->setName(program, PROGRAM_NAME);
  program->setVersion(program, PROGRAM_VERSION);
}