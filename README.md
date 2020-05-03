# wyshell

wyshell is a simple shell program. It is designed to work as a limited bash shell. This is a project for Linux Programming (COSC 3750).

## Prerequisites

GNU make is required.

## Installation

Use the GNU make utility to compile.

```bash
make
```

## Synopsis

```bash
./wyshell # Start shell
```

## Description

Things wyshell can do:
1. execute commands
2. redirect input
3. redirect output
4. redirect diagnostic output
5. pipe multiple commands together

Special Characters ; < > >> 2> 2>> 2>&1
 | &
1. ; --> signals end of command
2. < --> input redirection. Filename must follow
3. \> --> output redirection. Filename must follow
4. \>\> --> output append redirection. Filename must follow
5. 2> --> diagnostic output redirection. Filename must follow
6. 2>> --> diagnostic output append redirection. Filename must follow
7. 2>&1 --> diagnostic error to output
8. | --> signals commands to pipe together
9. & --> indicated command will be run in the background 

## Sudo Examples

```bash
$> command -option
  # execute command with option

$> command; command2
  # execute command follows by command2

$> command < in
  # redirect in to command

$> command > out
  # redirect command output to out

$> command >> out
  # redirect command output to append out

$> command 2> errOut
  # redirect diagnostic error to errOut

$> command 2>> errOut
  # redirect diagnostic error to append errOut

$> command 2>&1
  # redirect diagnostic error to current out redirection

$> command | command2 | command3
  # pipe command3 with command2 with command

$> command &
  # run command process in the background
```

## Examples 
```bash
$> ls 

$> ls -la

$> ls -la; ls -a

$> ls -la > out

$> ls -la > out; ls -a >> out

$> cat < in

$> ls error 2> errOut

$> ls error 2>> errOut

$> ls -la > out 2>&1

$> ls -la | head -5 | wc

$> ls -la | head -5 | wc &
```

## Complex Examples

```bash
$> ls -la | head -5 > out; cat out | grep -i "file" | wc -l >> out; cat out
```

## Author

Jared Spaulding, Kim Buckner
