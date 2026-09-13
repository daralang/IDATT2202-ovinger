cmake_minimum_required(VERSION 4.3.1)

add_executable(printx printx.c)
target_compile_options(printx PRIVATE -Wall -Wextra)

# Eksempelprogrammene fra oppgaveteksten. Bygges uten optimalisering
# slik at segmenter og stack frames ser ut som i oppgaven.
add_executable(mem mem.c)
target_compile_options(mem PRIVATE -O0)

add_executable(stackoverflow stackoverflow.c)
target_compile_options(stackoverflow PRIVATE -O0)
