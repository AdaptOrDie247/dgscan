#include "banner.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Program_init(struct Program* self) {
  self->getAuthor = &Program_getAuthor;
  self->getName = &Program_getName;
  self->getVersion = &Program_getVersion;
  self->printBanner = &Program_printBanner;
  self->setAuthor = &Program_setAuthor;
  self->setName = &Program_setName;
  self->setVersion = &Program_setVersion;
}
char* Program_getAuthor(struct Program* self) {
  return self->author;
}
char* Program_getName(struct Program* self) {
  return self->name;
}
char* Program_getVersion(struct Program* self) {
  return self->version;
}
void Program_printBanner(struct Program* self) {
  struct Banner banner;
  Banner_init(&banner, self);
  char* string = banner.getString(&banner);
  printf("%s", string);
  free(string);
}
void Program_setAuthor(struct Program* self, char* author) {
  strcpy_s(self->author, sizeof self->author, author);
}
void Program_setName(struct Program* self, char* name) {
  strcpy_s(self->name, sizeof self->name, name);
}
void Program_setVersion(struct Program* self, char* version) {
  strcpy_s(self->version, sizeof self->version, version);
}
