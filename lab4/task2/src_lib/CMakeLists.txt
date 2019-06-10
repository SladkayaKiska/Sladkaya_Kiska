add_library (task2_lib STATIC "")
target_sources(task2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")
target_include_directories(task2_lib PUBLIC "../includes")