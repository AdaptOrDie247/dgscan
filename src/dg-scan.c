#include "dg-scan.h"
#include "program.h"
int main() {
  print_banner();
  return 0;
}
void print_banner() {
  struct Program* dg_scan = Program_construct();
  Program_setName(dg_scan, "DG Scan");
  Program_setVersion(dg_scan, "1.0");
  Program_setAuthor(dg_scan, "Daniel Gilbert");
  Program_printBanner(dg_scan);
  Program_destruct(dg_scan);
}