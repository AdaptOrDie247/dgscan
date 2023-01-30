#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Program* Program_create() {
  Program* program = (Program*) malloc(sizeof(Program));
  Program_init(program);
  return program;
}
void Program_init(Program* program) {
  program->getAuthor = &Program_getAuthor;
  program->getBinaryName = &Program_getBinaryName;
  program->getName = &Program_getName;
  program->getVersion = &Program_getVersion;
  program->printBanner = &Program_printBanner;
  program->printUsage = &Program_printUsage;
  program->setAuthor = &Program_setAuthor;
  program->setBinaryName = &Program_setBinaryName;
  program->setName = &Program_setName;
  program->setVersion = &Program_setVersion;
}
void Program_destroy(Program* program) {
  if (program) {
    // Could call a void Program_reset(Program* program)
    // function here to unset vars used by the object.
    free(program);
  }
}
char* Program_getAuthor(Program* self) {
  return self->author;
}
char* Program_getBinaryName(Program* self) {
  return self->binary_name;
}
char* Program_getName(Program* self) {
  return self->name;
}
char* Program_getVersion(Program* self) {
  return self->version;
}
void Program_printBanner(Program* self) {
  Banner* banner = Banner_create(self);
  char* string = banner->getString(banner);
  printf("%s", string);
  free(string);
  Banner_destroy(banner);
}
void Program_printUsage(Program* self) {
  printf("%s TARGET_IP\n\n", self->binary_name);
}
void Program_setAuthor(Program* self, char* author) {
  strcpy_s(self->author, sizeof self->author, author);
}
void Program_setBinaryName(Program* self, char* binary_name) {
  strcpy_s(self->binary_name, sizeof self->binary_name, binary_name);
}
void Program_setName(Program* self, char* name) {
  strcpy_s(self->name, sizeof self->name, name);
}
void Program_setVersion(Program* self, char* version) {
  strcpy_s(self->version, sizeof self->version, version);
}
