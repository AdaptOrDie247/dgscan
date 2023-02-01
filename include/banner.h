#ifndef BANNER
#define BANNER
#include "program.h"
#define BANNER_LINE_SIZE 80
#define BANNER_LINE_COUNT 5
typedef struct {
  char name_line[BANNER_LINE_SIZE];
  char version_line[BANNER_LINE_SIZE];
  char author_line[BANNER_LINE_SIZE];
  void (*setAuthorLine)(void* self, char* author);
} dgscan_banner;
dgscan_banner* dgscan_banner_new(dgscan_program* program);
void Banner_init(dgscan_banner* banner, dgscan_program* program);
void dgscan_banner_free(dgscan_banner* banner);
char* dgscan_banner_get_string(dgscan_banner* self);
void Banner_setAuthorLine(dgscan_banner* self, char* author);
void dgscan_banner_set_name_line(dgscan_banner* self, char* name);
void dgscan_banner_set_version_line(dgscan_banner* self, char* version);
#endif
