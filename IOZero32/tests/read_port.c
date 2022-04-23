/*
read_port.c

Version 1.0 Created 01/04/2022

      compile with "gcc read_port.c ../ABE_IOZero32.c -Wall -Wextra -Wpedantic -Woverflow -o read_port"
      run with "./read_port"
 
This test validates the read_port method in the ABE_IOZero32 library.

Hardware Required: IO Zero 32, Logic Analyser on I2C Pins

=== Expected Result ============================

> Console Output:

Logic output Started
Logic output Ended

> Logic Analyser Output:

W 0x20 0x00
R 0x20 0x00
W 0x20 0x01
R 0x20 0x00

"""
 
 */

#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> 
#include <time.h>
#include <unistd.h>
#include "../ABE_IOZero32.h"

void clearscreen()
{
	printf("\033[2J\033[1;1H");
}

int main(int argc, char **argv)
{
	setvbuf(stdout, NULL, _IONBF, 0); // needed to print to the command line

    read_port(0x20, 0);    
	read_port(0x20, 1);     

	(void)argc;
	(void)argv;
	return (0);
}
