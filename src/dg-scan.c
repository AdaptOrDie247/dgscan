#include "dg-scan.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  struct Program* dg_scan = Program_construct();
  Program_setName(dg_scan, "DG Scan");
  Program_setVersion(dg_scan, "1.0");
  Program_setAuthor(dg_scan, "Daniel Gilbert");
  Program_printBanner(dg_scan);
  Program_destruct(dg_scan);
  return 0;
}