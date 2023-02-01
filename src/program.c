#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
dgscan_program* dgscan_program_new() {
  dgscan_program* program = (dgscan_program*) malloc(sizeof(dgscan_program));
  Program_init(program);
  return program;
}
void Program_init(dgscan_program* program) {
  program->getAuthor = &Program_getAuthor;
  program->getBinaryName = &Program_getBinaryName;
  program->getName = &Program_getName;
  program->getVersion = &Program_getVersion;
  program->printUsage = &Program_printUsage;
  program->setAuthor = &Program_setAuthor;
  program->setBinaryName = &Program_setBinaryName;
  program->setName = &Program_setName;
  program->setVersion = &Program_setVersion;
}
void dgscan_program_free(dgscan_program* program) {
  if (program) {
    // Could call a void Program_reset(dgscan_program* program)
    // function here to unset vars used by the object.
    free(program);
  }
}
char* Program_getAuthor(dgscan_program* self) {
  return self->author;
}
char* Program_getBinaryName(dgscan_program* self) {
  return self->binary_name;
}
char* Program_getName(dgscan_program* self) {
  return self->name;
}
char* Program_getVersion(dgscan_program* self) {
  return self->version;
}
void dgscan_program_print_banner(dgscan_program* self) {
  Banner* banner = Banner_create(self);
  char* string = banner->getString(banner);
  printf("%s", string);
  free(string);
  Banner_destroy(banner);
}
void Program_printUsage(dgscan_program* self) {
  printf("%s TARGET_IP\n\n", self->binary_name);
}
void Program_setAuthor(dgscan_program* self, char* author) {
  strcpy_s(self->author, sizeof self->author, author);
}
void Program_setBinaryName(dgscan_program* self, char* binary_name) {
  strcpy_s(self->binary_name, sizeof self->binary_name, binary_name);
}
void Program_setName(dgscan_program* self, char* name) {
  strcpy_s(self->name, sizeof self->name, name);
}
void Program_setVersion(dgscan_program* self, char* version) {
  strcpy_s(self->version, sizeof self->version, version);
}
