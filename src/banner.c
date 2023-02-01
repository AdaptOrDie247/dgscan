#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
dgscan_banner* dgscan_banner_new(dgscan_program* program) {
  dgscan_banner* banner = (dgscan_banner*) malloc(sizeof(dgscan_banner));
  Banner_init(banner, program);
  return banner;
}
void Banner_init(dgscan_banner* banner, dgscan_program* program) {
  banner->getString = &Banner_getString;
  banner->setAuthorLine = &Banner_setAuthorLine;
  banner->setNameLine = &Banner_setNameLine;
  banner->setVersionLine = &Banner_setVersionLine;
  banner->setNameLine(banner, dgscan_program_get_name(program));
  banner->setVersionLine(banner, dgscan_program_get_version(program));
  banner->setAuthorLine(banner, dgscan_program_get_author(program));
}
void Banner_destroy(dgscan_banner* banner) {
  if (banner) {
    // Could call a void Banner_reset(dgscan_banner* banner)
    // function here to unset vars used by the object.
    free(banner);
  }
}
char* Banner_getString(dgscan_banner* self) {
  int string_size = BANNER_LINE_SIZE * BANNER_LINE_COUNT;
  char* string = malloc(string_size);
  strncpy_s(string, string_size, "\n", BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->name_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->version_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->author_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, "\n", BANNER_LINE_SIZE);
  return string;
}
void Banner_setAuthorLine(dgscan_banner* self, char* author) {
  snprintf(self->author_line, sizeof self->author_line, "Author: %s\n", author);
}
void Banner_setNameLine(dgscan_banner* self, char* name) {
  snprintf(self->name_line, sizeof self->name_line, "%s\n", name);
}
void Banner_setVersionLine(dgscan_banner* self, char* version) {
  snprintf(self->version_line, sizeof self->version_line, "Version: %s\n", version);
}
