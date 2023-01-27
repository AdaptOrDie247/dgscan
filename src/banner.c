#include "banner.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Banner_init(Banner* self, Program* program) {
  self->getString = &Banner_getString;
  self->setAuthorLine = &Banner_setAuthorLine;
  self->setNameLine = &Banner_setNameLine;
  self->setVersionLine = &Banner_setVersionLine;
  self->setNameLine(self, program->getName(program));
  self->setVersionLine(self, program->getVersion(program));
  self->setAuthorLine(self, program->getAuthor(program));
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
