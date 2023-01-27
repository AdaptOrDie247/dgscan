#include "dg-scan.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#define PROGRAM_NAME "DG Scan"
#define PROGRAM_VERSION "1.0"
#define PROGRAM_AUTHOR "Daniel Gilbert"
int main() {
  Main_printBanner();
  return 0;
}
void Main_printBanner() {
  struct Program dg_scan;
  Program_init(&dg_scan);
  dg_scan.setName(&dg_scan, PROGRAM_NAME);
  dg_scan.setVersion(&dg_scan, PROGRAM_VERSION);
  dg_scan.setAuthor(&dg_scan, PROGRAM_AUTHOR);
  dg_scan.printBanner(&dg_scan);
}
