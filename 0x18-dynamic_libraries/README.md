# Dynamic libraries
By the end of the project I should be able to:
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

## Technology 

- Scripts written in `Bash 4.3.11`
- C files are compiled using `gcc 4.8.4`
- Tested on Ubuntu 20.04 LTS

## Files

| Filename | Description |
| -------- | ----------- |
| `libdynamic.so` |  Create the dynamic library libdynamic |
| `1-create_dynamic_lib.sh` |  Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory. |
| `100-operations.so` | Dynamic library that contains mathematical functio
ns |
| `101-make_me_win.sh` | Shell script that injects a C program in order to hack `gm` executable file |

