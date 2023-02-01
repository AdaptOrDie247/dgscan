#ifndef PROGRAM
#define PROGRAM
typedef struct {
  char author[40];
  char binary_name[20];
  char name[50];
  char version[20];
  char* (*getBinaryName)(void* self);
  char* (*getName)(void* self);
  char* (*getVersion)(void* self);
} dgscan_program;
dgscan_program* dgscan_program_new();
void Program_init(dgscan_program* program);
void dgscan_program_free(dgscan_program* program);
char* dgscan_program_get_author(dgscan_program* self);
char* Program_getBinaryName(dgscan_program* self);
char* Program_getName(dgscan_program* self);
char* Program_getVersion(dgscan_program* self);
void dgscan_program_print_banner(dgscan_program* self);
void dgscan_program_print_usage(dgscan_program* self);
void dgscan_program_set_author(dgscan_program* self, char* author);
void dgscan_program_set_binary_name(dgscan_program* self, char* binary_name);
void dgscan_program_set_name(dgscan_program* self, char* name);
void dgscan_program_set_version(dgscan_program* self, char* version);
#endif
