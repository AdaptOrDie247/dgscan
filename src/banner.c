#include "../include/banner.h"
#include "../include/program.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dgscan_banner_free(dgscan_banner* banner) {
  if (banner) {
    free(banner);
  }
}

char* dgscan_banner_get_string(dgscan_banner* banner) {
  int string_size = DGSCAN_BANNER_LINE_SIZE * DGSCAN_BANNER_LINE_COUNT;
  char* string = malloc(string_size);
  strncpy_s(string, string_size, "\n", DGSCAN_BANNER_LINE_SIZE);
  strncat_s(string, string_size, banner->name_line, DGSCAN_BANNER_LINE_SIZE);
  strncat_s(string, string_size, banner->version_line, DGSCAN_BANNER_LINE_SIZE);
  strncat_s(string, string_size, banner->author_line, DGSCAN_BANNER_LINE_SIZE);
  strncat_s(string, string_size, "\n", DGSCAN_BANNER_LINE_SIZE);
  return string;
}

void dgscan_banner_init(dgscan_banner* banner, dgscan_program* program) {
  dgscan_banner_set_name_line(banner, dgscan_program_get_name(program));
  dgscan_banner_set_version_line(banner, dgscan_program_get_version(program));
  dgscan_banner_set_author_line(banner, dgscan_program_get_author(program));
}

dgscan_banner* dgscan_banner_new(dgscan_program* program) {
  dgscan_banner* banner = (dgscan_banner*) malloc(sizeof(dgscan_banner));
  dgscan_banner_init(banner, program);
  return banner;
}

void dgscan_banner_set_author_line(dgscan_banner* banner, char* author) {
  snprintf(banner->author_line, sizeof banner->author_line, "Author: %s\n", author);
}

void dgscan_banner_set_name_line(dgscan_banner* banner, char* name) {
  snprintf(banner->name_line, sizeof banner->name_line, "%s\n", name);
}

void dgscan_banner_set_version_line(dgscan_banner* banner, char* version) {
  snprintf(banner->version_line, sizeof banner->version_line, "Version: %s\n", version);
}
