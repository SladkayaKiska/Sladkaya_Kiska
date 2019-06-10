add_library (lab7.2_lib STATIC "")
target_sources(lab7.2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortHeapArray.c")
target_include_directories(lab7.2_lib PUBLIC "../includes")