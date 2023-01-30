#ifndef PROGRAM
#define PROGRAM
typedef struct {
  char author[40];
  char binary_name[20];
  char name[50];
  char version[20];
  char* (*getAuthor)(void* self);
  char* (*getBinaryName)(void* self);
  char* (*getName)(void* self);
  char* (*getVersion)(void* self);
  void (*printBanner)(void* self);
  void (*printUsage)(void* self);
  void (*setAuthor)(void* self, char* author);
  void (*setBinaryName)(void* self, char* binary_name);
  void (*setName)(void* self, char* name);
  void (*setVersion)(void* self, char* version);
} Program;
Program* Program_create();
void Program_init(Program* program);
void Program_destroy(Program* program);
char* Program_getAuthor(Program* self);
char* Program_getBinaryName(Program* self);
char* Program_getName(Program* self);
char* Program_getVersion(Program* self);
void Program_printBanner(Program* self);
void Program_printUsage(Program* self);
void Program_setAuthor(Program* self, char* author);
void Program_setBinaryName(Program* self, char* binary_name);
void Program_setName(Program* self, char* name);
void Program_setVersion(Program* self, char* version);
#endif
