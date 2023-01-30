#ifndef BANNER
#define BANNER
#include "program.h"
#define BANNER_LINE_SIZE 80
#define BANNER_LINE_COUNT 5
typedef struct {
  char name_line[BANNER_LINE_SIZE];
  char version_line[BANNER_LINE_SIZE];
  char author_line[BANNER_LINE_SIZE];
  char* (*getString)(void* self);
  void (*setAuthorLine)(void* self, char* author);
  void (*setNameLine)(void* self, char* name);
  void (*setVersionLine)(void* self, char* version);
} Banner;
Banner* Banner_create(Program* program);
void Banner_init(Banner* banner, Program* program);
void Banner_destroy(Banner* banner);
char* Banner_getString(Banner* self);
void Banner_setAuthorLine(Banner* self, char* author);
void Banner_setNameLine(Banner* self, char* name);
void Banner_setVersionLine(Banner* self, char* version);
#endif
