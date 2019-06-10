add_library(lab7.1_lib STATIC "")
target_include_directories(lab7.1_lib PUBLIC "../includes")
target_sources(lab7.1_lib PRIVATE "incrementHeapVariable.c")