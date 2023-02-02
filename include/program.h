#ifndef DGSCAN_PROGRAM_H
#define DGSCAN_PROGRAM_H

typedef struct {
  char author[40];
  char binary_name[20];
  char name[50];
  char version[20];
} dgscan_program;

void dgscan_program_free(dgscan_program* program);
char* dgscan_program_get_author(dgscan_program* program);
char* dgscan_program_get_binary_name(dgscan_program* program);
char* dgscan_program_get_name(dgscan_program* program);
char* dgscan_program_get_version(dgscan_program* program);
dgscan_program* dgscan_program_new();
void dgscan_program_print_banner(dgscan_program* program);
void dgscan_program_print_usage(dgscan_program* program);
void dgscan_program_set_author(dgscan_program* program, char* author);
void dgscan_program_set_binary_name(dgscan_program* program, char* binary_name);
void dgscan_program_set_name(dgscan_program* program, char* name);
void dgscan_program_set_version(dgscan_program* program, char* version);

#endif
