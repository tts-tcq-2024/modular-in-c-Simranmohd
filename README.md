# Topic: Modularity

## Divide into files

### Summary:
The 25-pair color code, is used to identify wires in telecommunications cables.
Different codes are used for wire leads on devices such as transformers or in building wiring.
For more details refer to [This Wiki](https://en.wikipedia.org/wiki/25-pair_color_code). 

There are 25 possible pairs of colors. 

- Each pair of colors maps to a corresponding number
- Such numbers translate to a pair of colors -
a major color and a minor color

## Exercise Details:

### Modularity

The entire translation program is in a single file.
Before adding features and making it bigger,
split the file.
This exercise has a limit on the loc (lines of code)
per file. See the workflow for details.

### New Feature Request

The color coding needs to be printed as a reference manual for wiring personnel.
This manual is a mapping from the color-names to the corresponding numbers.
Add a function that would format the color coding in a form that someone can print.
Also resolve any coding guideline violations.

File Structure
1.color_mapping.h: Header file containing declarations for color mappings.
2.color_mapping.c: Source file containing the color mappings.
3.color_pair.h: Header file containing declarations for color pair operations.
4.color_pair.c: Source file containing the color pair operations.
5.color_reference_manual.h: Header file containing declarations for the reference manual generation.
6.color_reference_manual.c: Source file for generating the reference manual.
7.color_tests.h: Header file containing declarations for tests.
8.color_tests.c: Source file for tests.
9.main.c: Main source file to run the program.
