#include "dg-scan.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#define PROGRAM_NAME "DG Scan"
#define PROGRAM_BINARY_NAME "dg-scan"
#define PROGRAM_VERSION "1.0"
#define PROGRAM_AUTHOR "Daniel Gilbert"
int main(void) {
  struct Program dg_scan;
  Program_init(&dg_scan);
  Main_printBanner(&dg_scan);
  return 0;
}
void Main_printBanner(struct Program* program) {
  program->setName(program, PROGRAM_NAME);
  program->setBinaryName(program, PROGRAM_BINARY_NAME);
  program->setVersion(program, PROGRAM_VERSION);
  program->setAuthor(program, PROGRAM_AUTHOR);
  program->printBanner(program);
}
