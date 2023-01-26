#ifndef PROGRAM
#define PROGRAM
struct Program {
  char name[50];
  char version[20];
  char author[40];
  char* (*getAuthor)(void* self);
  char* (*getName)(void* self);
  char* (*getVersion)(void* self);
  void (*printBanner)(void* self);
  void (*setAuthor)(void* self, char* author);
  void (*setName)(void* self, char* name);
  void (*setVersion)(void* self, char* version);
};
int Program_init(struct Program* program);
char* Program_getAuthor(struct Program* program);
char* Program_getName(struct Program* program);
char* Program_getVersion(struct Program* program);
void Program_printBanner(struct Program* program);
void Program_setAuthor(struct Program* program, char* author);
void Program_setName(struct Program* program, char* name);
void Program_setVersion(struct Program* program, char* version);
#endif