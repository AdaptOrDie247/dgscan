#ifndef BANNER
#define BANNER
#include "program.h"
#define BANNER_LINE_SIZE 80
#define BANNER_LINE_COUNT 3
struct Banner {
  char name_line[BANNER_LINE_SIZE];
  char version_line[BANNER_LINE_SIZE];
  char author_line[BANNER_LINE_SIZE];
  char* (*getString)(void* self);
  void (*setAuthorLine)(void* self, char* author);
  void (*setNameLine)(void* self, char* name);
  void (*setVersionLine)(void* self, char* version);
};
void Banner_init(struct Banner* self, struct Program* program);
char* Banner_getString(struct Banner* self);
void Banner_setAuthorLine(struct Banner* self, char* author);
void Banner_setNameLine(struct Banner* self, char* name);
void Banner_setVersionLine(struct Banner* self, char* version);
#endif
