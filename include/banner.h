#ifndef BANNER
#define BANNER

#include "program.h"

#define DGSCAN_BANNER_LINE_SIZE 80
#define DGSCAN_BANNER_LINE_COUNT 5

typedef struct {
  char name_line[DGSCAN_BANNER_LINE_SIZE];
  char version_line[DGSCAN_BANNER_LINE_SIZE];
  char author_line[DGSCAN_BANNER_LINE_SIZE];
} dgscan_banner;

dgscan_banner* dgscan_banner_new(dgscan_program* program);
void dgscan_banner_init(dgscan_banner* banner, dgscan_program* program);
void dgscan_banner_free(dgscan_banner* banner);
char* dgscan_banner_get_string(dgscan_banner* self);
void dgscan_banner_set_author_line(dgscan_banner* self, char* author);
void dgscan_banner_set_name_line(dgscan_banner* self, char* name);
void dgscan_banner_set_version_line(dgscan_banner* self, char* version);

#endif
