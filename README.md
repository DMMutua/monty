# MONTY INTERPRETER
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Command Overview
The Monty Interpreter will tokenize command inputs, ignoring all whitespaces and comments which start with a # sign. When tokenizing, the interpreter only looks at the first 2 inputs per line.

Potential failures and their messages will be mentioned for each operation. Failures that can occur at this time include:
* If a file is not given or filename given has too many arguments [USAGE: monty file] 
* If the file given is invalid [Error: Can't open file]
* If an unknown operation is given [Error: Unknown Instructions]
* If Dynamic Memory Allocation Fails [Error: malloc failed]

#### There Exists about 17 valid operation Codes;


