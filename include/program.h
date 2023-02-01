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
} dgscan_program;
dgscan_program* Program_create();
void Program_init(dgscan_program* program);
void Program_destroy(dgscan_program* program);
char* Program_getAuthor(dgscan_program* self);
char* Program_getBinaryName(dgscan_program* self);
char* Program_getName(dgscan_program* self);
char* Program_getVersion(dgscan_program* self);
void Program_printBanner(dgscan_program* self);
void Program_printUsage(dgscan_program* self);
void Program_setAuthor(dgscan_program* self, char* author);
void Program_setBinaryName(dgscan_program* self, char* binary_name);
void Program_setName(dgscan_program* self, char* name);
void Program_setVersion(dgscan_program* self, char* version);
#endif
