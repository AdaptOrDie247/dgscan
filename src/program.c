#include "banner.h"
#include "program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Program* Program_construct() {
  return malloc(sizeof(struct Program));
}
void Program_destruct(struct Program* program) {
  free(program);
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
  struct Banner* banner = Banner_construct(program);
  char* string = Banner_getString(banner);
  printf("%s", string);
  free(string);
  Banner_destruct(banner);
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