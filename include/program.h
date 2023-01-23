#ifndef PROGRAM
#define PROGRAM
struct Program {
  char name[50];
  char version[20];
  char author[40];
};
struct Program* Program_construct();
void Program_destruct(struct Program* program);
char* Program_getAuthor(struct Program* program);
char* Program_getName(struct Program* program);
char* Program_getVersion(struct Program* program);
void Program_printBanner(struct Program* program);
void Program_setAuthor(struct Program* program, char* author);
void Program_setName(struct Program* program, char* name);
void Program_setVersion(struct Program* program, char* version);
#endif