#~/bin/bash
gcc -Wall -pedantic -Wextra -c *.c
ar -cr liball.a *.c
