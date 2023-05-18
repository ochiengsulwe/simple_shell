# Simple Shell Project

This is a simple shell project that implements a basic command-line interface. The shell allows users to execute commands and interact with the underlying operating system.

## Features

* Execute basic shell commands
* Supports command line arguments
* Handles input/output redirection
* Implements piping of commands

## Getting Started

These instructions will help you get a copy of the project up and running on your local machine.

###  Prerequisites
* Linux-based operating system(e.g., Ubuntu, CentOS)
* GCC (GNU Compiler Collection) installed

### Installation

#### 1. Clone the repository:

	<git clone https://[your-PAT @]github.com/your-username/simple_shell.git>

#### 2. Navigate to the project directory:

	<cd simple_shell>

#### 3. Compile the source code:

	<gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh>

#### 4. Run the shell:

	<./hsh>

### Usage

Once the shell is runnin, you can enter commands just like in a regular shell. The supported commands include standard Linux commands and any custom commands implemented in the shell.

#### Example commands:

* `ls`: List files and directories in the current directory.
* `cd <directory>`: Change the current directory to the specified directory.

For more information on supported commands and features, please refer to the source code and comments.

## Acknowledgements

* This project is based on the concepts learned in the ALX-Software Engineering Program, Sprint II - Low-level Programming::programming in C.
* This project is a group work done jointly by https://github.com/Keny09 and https://github.com/ochiengsulwe
