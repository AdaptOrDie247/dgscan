#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Banner* Banner_create(dgscan_program* program) {
  Banner* banner = (Banner*) malloc(sizeof(Banner));
  Banner_init(banner, program);
  return banner;
}
void Banner_init(Banner* banner, dgscan_program* program) {
  banner->getString = &Banner_getString;
  banner->setAuthorLine = &Banner_setAuthorLine;
  banner->setNameLine = &Banner_setNameLine;
  banner->setVersionLine = &Banner_setVersionLine;
  banner->setNameLine(banner, program->getName(program));
  banner->setVersionLine(banner, program->getVersion(program));
  banner->setAuthorLine(banner, dgscan_program_get_author(program));
}
void Banner_destroy(Banner* banner) {
  if (banner) {
    // Could call a void Banner_reset(Banner* banner)
    // function here to unset vars used by the object.
    free(banner);
  }
}
char* Banner_getString(Banner* self) {
  int string_size = BANNER_LINE_SIZE * BANNER_LINE_COUNT;
  char* string = malloc(string_size);
  strncpy_s(string, string_size, "\n", BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->name_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->version_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, self->author_line, BANNER_LINE_SIZE);
  strncat_s(string, string_size, "\n", BANNER_LINE_SIZE);
  return string;
}
void Banner_setAuthorLine(Banner* self, char* author) {
  snprintf(self->author_line, sizeof self->author_line, "Author: %s\n", author);
}
void Banner_setNameLine(Banner* self, char* name) {
  snprintf(self->name_line, sizeof self->name_line, "%s\n", name);
}
void Banner_setVersionLine(Banner* self, char* version) {
  snprintf(self->version_line, sizeof self->version_line, "Version: %s\n", version);
}
