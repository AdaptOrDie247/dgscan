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
void Program_init(Program* self) {
  self->getAuthor = &Program_getAuthor;
  self->getBinaryName = &Program_getBinaryName;
  self->getName = &Program_getName;
  self->getVersion = &Program_getVersion;
  self->printBanner = &Program_printBanner;
  self->printUsage = &Program_printUsage;
  self->setAuthor = &Program_setAuthor;
  self->setBinaryName = &Program_setBinaryName;
  self->setName = &Program_setName;
  self->setVersion = &Program_setVersion;
}
void Program_destroy(Program* program) {
  if (program) {
    // Could call a void Program_reset(Program* self)
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
  Banner banner;
  Banner_init(&banner, self);
  char* string = banner.getString(&banner);
  printf("%s", string);
  free(string);
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
