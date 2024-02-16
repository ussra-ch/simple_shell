# Simple Shell Project

## Description

This project is a UNIX command line interpreter developed in C. It provides a simple shell interface where users can type commands, and the shell executes them. Below are the details and features of the Simple Shell project:

## Usage

To use the Simple Shell, execute the `simple_shell` binary. The shell will display a prompt where you can type commands. Each command line ends with a new line, and the prompt is displayed again after each command execution.

## Features

- Displays a prompt and waits for user input.
- Executes simple command lines consisting of only one word.
- Handles errors gracefully, including when an executable is not found.
- Handles the "end of file" condition (Ctrl+D).
- Does not support advanced features like semicolons, pipes, redirections, or special characters.
- Does not implement built-ins.
- Does not handle PATH by default (introduced in later versions).
- Does not support moving the cursor or handling commands with arguments by default (introduced in later versions).
- Uses `execve` as the core part for executing commands.

## Project Versions

### Simple Shell 0.1
- Basic shell functionality.
- Displays prompt, executes commands, handles errors.

### Simple Shell 0.2
- Adds support for handling command lines with arguments.

### Simple Shell 0.3
- Handles the PATH environment variable.
- Does not call fork if the command doesn't exist.

### Simple Shell 0.4
- Implements the exit built-in command to exit the shell.

### Simple Shell 1.0
- Implements the env built-in command to print the current environment.

### Simple Shell 0.1.1 (Advanced)
- Custom `getline` function without using `getline`.
- Uses a buffer to read multiple characters at once and minimizes calls to `read` system call.

### Simple Shell 0.2.1 (Advanced)
- Does not use `strtok`.

### Simple Shell 0.4.1 (Advanced)
- Handles arguments for the built-in exit command.
