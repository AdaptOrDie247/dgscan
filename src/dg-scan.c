#include "program.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  struct Program dg_scan;
  Program_init(&dg_scan);
  dg_scan.setName(&dg_scan, "DG Scan");
  dg_scan.setVersion(&dg_scan, "1.0");
  dg_scan.setAuthor(&dg_scan, "Daniel Gilbert");
  dg_scan.printBanner(&dg_scan);
  return 0;
}
