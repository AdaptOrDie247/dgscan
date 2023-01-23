#include "banner.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Banner* Banner_construct(struct Program* program) {
  struct Banner* banner = malloc(sizeof(struct Banner));
  snprintf(banner->name_line, sizeof banner->name_line, "%s\n", Program_getName(program));
  snprintf(banner->version_line, sizeof banner->version_line, "Version: %s\n", Program_getVersion(program));
  snprintf(banner->author_line, sizeof banner->author_line, "Author: %s\n", Program_getAuthor(program));
  return banner;
}
void Banner_destruct(struct Banner* banner) {
  free(banner);
}
char* Banner_getAuthorLine(struct Banner* banner) {
  return banner->author_line;
}
char* Banner_getNameLine(struct Banner* banner) {
  return banner->name_line;
}
char* Banner_getString(struct Banner* banner) {
  int string_size = BANNER_LINE_SIZE * BANNER_LINE_COUNT;
  char* string = malloc(string_size);
  strncpy_s(string, string_size, Banner_getNameLine(banner), BANNER_LINE_SIZE);
  strncat_s(string, string_size, Banner_getVersionLine(banner), BANNER_LINE_SIZE);
  strncat_s(string, string_size, Banner_getAuthorLine(banner), BANNER_LINE_SIZE);
  return string;
}
char* Banner_getVersionLine(struct Banner* banner) {
  return banner->version_line;
}