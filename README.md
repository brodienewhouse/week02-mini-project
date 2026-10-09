# Temperature Converter (week02-mini-project)

A C++ App that converts Celsius to Fahrenheit and vice-versa built by Brodie Newhouse, Georgy Rached, and T Zhong. See Contributions.md for who did what.

## Setup

This app requires g++, git, and bash

Terminal:
sudo apt update \
sudo apt install build-essential git gdb \
git clone https://github.com/brodienewhouse/week02-mini-project.git \
cd week02-mini-project 

## Input/Output Contract

# Input

The input for this app should be two values separated by a space. The first value should be either F2C or C2F to indicate Fahrenheit to Celsius or Celsius to Fahrenheit. The second value should be a decimal number which can be positive or negative.

Example Input: C2F 23.1

# Output

| Situation | Output text | Exit code |
|---|---|---|
| Valid C2F | `<value> F` with 1 decimal place, e.g. `32.0 F` | 0 |
| Valid F2C | `<value> C` with 1 decimal place, e.g. `0.0 C` | 0 |
| Unsupported direction | `Error: unsupported direction` | 1 |
| Non-numeric temperature | `Error: invalid temperature` | 1 |

Formulas: F = C * 9 / 5 + 32 and C = (F - 32) * 5 / 9

## Build and Test Commands

Terminal:
mkdir -p build \
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app \
./build/app \
bash test.sh 

Either ./build/app or bash test.sh can be used to test the program

## Limitations

Only Celsius and Fahrenheit, not Kelvin.
Inputs are case-sensitive and very specific.
Outputs are rounded to just one decimal place.
Every run only allows one conversion.

## AI-Use Disclosure

Claude was utilized to help draft the structure of the README file. All code, testing, and GitHub actions were done by team members. The Input/Output Contract was dicussed and created by team members in collaboration. 
