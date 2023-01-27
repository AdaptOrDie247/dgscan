#ifndef PROGRAM
#define PROGRAM
struct Program {
  char author[40];
  char binary_name[20];
  char name[50];
  char version[20];
  char* (*getAuthor)(void* self);
  char* (*getBinaryName)(void* self);
  char* (*getName)(void* self);
  char* (*getVersion)(void* self);
  void (*printBanner)(void* self);
  void (*setAuthor)(void* self, char* author);
  void (*setBinaryName)(void* self, char* binary_name);
  void (*setName)(void* self, char* name);
  void (*setVersion)(void* self, char* version);
};
void Program_init(struct Program* self);
char* Program_getAuthor(struct Program* self);
char* Program_getBinaryName(struct Program* self);
char* Program_getName(struct Program* self);
char* Program_getVersion(struct Program* self);
void Program_printBanner(struct Program* self);
void Program_setAuthor(struct Program* self, char* author);
void Program_setBinaryName(struct Program* self, char* binary_name);
void Program_setName(struct Program* self, char* name);
void Program_setVersion(struct Program* self, char* version);
#endif
