#ifndef __UTILS_H__
#define __UTILS_H__
#include "proc.h"

void print_usage(char*);
void print_line(const char*, const char*, const char*, const char*, const char*, const char*, const char*);
void print_head();
void print(proc);
bool is_number(char*);
int to_number(char*);
char* match_regex(char*, char*);
char* read_file(char*);
char* get_username(int);
char* get_username(int);
char* proc_path(char*);

#endif