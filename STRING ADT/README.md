🔎 Featured Implementation: Custom String ADT (06_string)

This directory contains a custom Dynamic String ADT implementation in C. It mimics the functionality of dynamic strings found in standard libraries (such as C++'s std::string) by managing dynamic memory allocation (malloc, realloc, free) behind a clean API.

🏗️ Data Structure Architecture

The dynamic string is represented using a custom struct:

typedef struct S {
    char *str;  // Pointer to dynamic character array
    int size;   // Total allocated capacity
    int n;      // Current string length
} S;
⚙️ Available Operations
Function	Signature	Description	Time Complexity
create	void create(S *s, char c[])	Initializes a string from a standard C-string.	O(N)
push_back	void push_back(S *s, char c)	Appends a single character (resizes if full).	O(1) Amortized
pop_back	void pop_back(S *s)	Removes the last character.	O(1)
size	int size(S *s)	Returns current character count.	O(1)
at_index	char at_index(S *s, int in)	Accesses character at index in.	O(1)
clear	void clear(S *s)	Clears text content without freeing the buffer.	O(1)
concat	void concat(S *m, S *pat)	Concatenates string pat onto string m.	O(M)
insert_at	void insert_at(S *s, char c, int in)	Inserts character at given index, shifting elements.	O(N)
delete_at	void delete_at(S *s, int in)	Deletes character at given index, shifting elements.	O(N)
replace_at	void replace_at(S *s, char c, int in)	Overwrites character at target index.	O(1)
find_substring	int find_substring(S *s, S *pat)	Naive pattern matching. Returns start index or -1.	O(N × M)
display	void display(S *s)	Prints string content to stdout.	O(N)
Free	void Free(S *s)	Frees allocated memory and safely resets pointers.	O(1)
🔍 String Searching

The find_substring() function uses the Naive Pattern Matching Algorithm to search for a pattern inside the main string.

For example:

Main String : ComputerScience
Pattern     : Science

The starting index of Science is:

8

If the pattern is not found, the function returns:

-1
🧠 Key Concepts
String Abstract Data Type (ADT)
Dynamic Memory Allocation
Structures
Pointers
Character Arrays
malloc()
realloc()
free()
String Concatenation
String Insertion
String Deletion
Character Replacement
Substring Searching
Naive Pattern Matching
⏱️ Complexity Notation

Where:

N = Length of the main string
M = Length of the pattern or secondary string

The most important operation in this implementation is substring searching:

Naive Pattern Matching: O(N × M)
