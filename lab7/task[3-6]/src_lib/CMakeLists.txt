add_library(lab7.3_lib STATIC "")
target_sources(lab7.3_lib PRIVATE "strlen.c" "find.c" "delete.c" "strcpy.c" "strcat.c" "insert.c")
target_include_directories(lab7.3_lib PUBLIC "../includes")