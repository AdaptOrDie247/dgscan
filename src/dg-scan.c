#include "dg-scan.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  Main_printBanner();
  return 0;
}
void Main_printBanner() {
  struct Program dg_scan;
  Program_init(&dg_scan);
  dg_scan.setName(&dg_scan, "DG Scan");
  dg_scan.setVersion(&dg_scan, "1.0");
  dg_scan.setAuthor(&dg_scan, "Daniel Gilbert");
  dg_scan.printBanner(&dg_scan);
}
