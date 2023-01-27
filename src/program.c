#include "banner.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Program_init(struct Program* program) {
  program->getAuthor = &Program_getAuthor;
  program->getName = &Program_getName;
  program->getVersion = &Program_getVersion;
  program->printBanner = &Program_printBanner;
  program->setAuthor = &Program_setAuthor;
  program->setName = &Program_setName;
  program->setVersion = &Program_setVersion;
  return 0;
}
char* Program_getAuthor(struct Program* program) {
  return program->author;
}
char* Program_getName(struct Program* program) {
  return program->name;
}
char* Program_getVersion(struct Program* program) {
  return program->version;
}
void Program_printBanner(struct Program* program) {
  struct Banner banner;
  Banner_init(&banner, program);
  char* string = banner.getString(&banner);
  printf("%s", string);
  free(string);
}
void Program_setAuthor(struct Program* program, char* author) {
  strcpy_s(program->author, sizeof program->author, author);
}
void Program_setName(struct Program* program, char* name) {
  strcpy_s(program->name, sizeof program->name, name);
}
void Program_setVersion(struct Program* program, char* version) {
  strcpy_s(program->version, sizeof program->version, version);
}