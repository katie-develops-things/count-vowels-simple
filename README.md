# Count Vowels in a File (Simple Version)

This simple program in C displays the count of the vowels A, E, I, O, and U contained in a file. The file is specified by the user as a command line argument when the program is called to be executed. This program is only to be run on Linux systems.

## User Information
###### Usage
To run the program, enter the program directory and type the following into a bash or zsh shell. The filename is the file you wish to count the occurence of vowels in.
```
./count-vowels-simple filepath/filename.txt
```

###### Testing
This program was tested on a virtual machine provided by Parallels for using Ubuntu 22.04 for ARM64.

###### To compile
If the program needs to be recomplied for some reason, type the following commands into a shell to generate an executable file.
```
gcc -c count-vowels.c
gcc -c main.c
gcc count-vowels.o main.o -o count-vowels-simple
```

## Security
This program only allows for reading of files; writing privilidges are not granted anywhere in the program's source code. Further, sudo privilidges are not granted when reading files, so any file that requires sudo privilidges will not be able to be opened by this program. By default on Ubuntu 20.x, many system files do not give the root user reading access unless permissions are explicitly changed for that file or directory, so these files my not be read by this program either.
However, this program does implicitly allow the user to see if the particular file they enter as an argument exists or not, which could allow a malicious actor to perform a directory traversal attack.
