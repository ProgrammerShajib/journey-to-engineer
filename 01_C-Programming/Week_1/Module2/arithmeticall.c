#include <stdio.h>   // Standard Input/Output library (needed for printf, scanf)
#include <limits.h>  // Contains limits for integer types (e.g., INT_MAX)
#include <float.h>   // Contains limits for floating types (e.g., FLT_MAX)

/*
-------------------------------------------------------
   🌟 C BASIC DATATYPES, FORMAT SPECIFIERS & SIZES 🌟
-------------------------------------------------------
   Datatypes are used to tell the compiler what type of
   data a variable will store.

   Categories:
   1️⃣ Integer types → int, short, long, long long
   2️⃣ Floating-point types → float, double, long double
   3️⃣ Character type → char
   4️⃣ Void type → void (no value)
   5️⃣ Derived/Custom types → arrays, pointers, structs, etc.
*/

int main() {

    printf("========== 📘 BASIC DATATYPES IN C ==========\n\n");

    //-----------------------------
    // 🧮 INTEGER TYPES
    //-----------------------------
    int a = 10;                    // 4 bytes (32 bits) typically
    short int b = 5;               // 2 bytes (16 bits)
    long int c = 100000;           // 4 or 8 bytes (depends on system)
    long long int d = 1234567890;  // 8 bytes (64 bits)
    unsigned int e = 25;           // Only positive numbers

    printf("Integer (int): %d | Size: %zu bytes | Bits: %zu\n", a, sizeof(a), sizeof(a)*8);
    printf("Short int: %hd | Size: %zu bytes | Bits: %zu\n", b, sizeof(b), sizeof(b)*8);
    printf("Long int: %ld | Size: %zu bytes | Bits: %zu\n", c, sizeof(c), sizeof(c)*8);
    printf("Long long int: %lld | Size: %zu bytes | Bits: %zu\n", d, sizeof(d), sizeof(d)*8);
    printf("Unsigned int: %u | Size: %zu bytes | Bits: %zu\n\n", e, sizeof(e), sizeof(e)*8);

    //-----------------------------
    // 🔤 CHARACTER TYPE
    //-----------------------------
    char ch = 'A';                 // 1 byte (8 bits)
    unsigned char uch = 255;       // 1 byte (0 to 255 range)
    printf("Character (char): %c | ASCII Value: %d | Size: %zu bytes | Bits: %zu\n", ch, ch, sizeof(ch), sizeof(ch)*8);
    printf("Unsigned char: %u | Size: %zu bytes | Bits: %zu\n\n", uch, sizeof(uch), sizeof(uch)*8);

    //-----------------------------
    // 🌊 FLOATING-POINT TYPES
    //-----------------------------
    float f = 3.14159f;            // 4 bytes, 6–7 digits precision
    double g = 3.14159265358979;   // 8 bytes, 15 digits precision
    long double h = 3.141592653589793238L; // 16 bytes (depends on compiler)

    printf("Float: %f | Size: %zu bytes | Bits: %zu | Min: %e | Max: %e\n", f, sizeof(f), sizeof(f)*8, FLT_MIN, FLT_MAX);
    printf("Double: %lf | Size: %zu bytes | Bits: %zu | Min: %e | Max: %e\n", g, sizeof(g), sizeof(g)*8, DBL_MIN, DBL_MAX);
    printf("Long double: %Lf | Size: %zu bytes | Bits: %zu | Min: %Le | Max: %Le\n\n", h, sizeof(h), sizeof(h)*8, LDBL_MIN, LDBL_MAX);

    //-----------------------------
    // 🧠 BOOLEAN TYPE (C99 feature)
    //-----------------------------
    // In C, <stdbool.h> defines 'bool' as an alias for _Bool.
    // true = 1, false = 0
    #include <stdbool.h>
    bool isCodingFun = true;
    bool isTired = false;

    printf("Boolean (true=1 / false=0): %d, %d | Size: %zu bytes | Bits: %zu\n\n",
           isCodingFun, isTired, sizeof(isCodingFun), sizeof(isCodingFun)*8);

    //-----------------------------
    // 🔢 FORMAT SPECIFIERS SUMMARY
    //-----------------------------
    printf("========== 📋 FORMAT SPECIFIER REFERENCE ==========\n");
    printf("%%d or %%i → int\n");
    printf("%%u → unsigned int\n");
    printf("%%ld → long int\n");
    printf("%%lld → long long int\n");
    printf("%%f → float\n");
    printf("%%lf → double\n");
    printf("%%Lf → long double\n");
    printf("%%c → char\n");
    printf("%%s → string (char array)\n");
    printf("%%p → pointer (memory address)\n");
    printf("%%x / %%X → hexadecimal format\n");
    printf("%%o → octal format\n");
    printf("%%e → scientific notation (float)\n\n");

    //-----------------------------
    // 💾 MEMORY ADDRESS (Pointer basics)
    //-----------------------------
    int number = 42;
    printf("Memory address of variable 'number' = %p\n\n", (void*)&number);

    //-----------------------------
    // 🔠 STRINGS (array of characters)
    //-----------------------------
    char name[] = "Sajib Barua";   // Stored as a char array (each char = 1 byte)
    printf("String: %s | Size: %zu bytes (including null '\\0')\n\n", name, sizeof(name));

    //-----------------------------
    // 🧩 VOID TYPE
    //-----------------------------
    // 'void' means no value or no return type.
    // Commonly used in functions like 'void main()' or 'void func()'
    printf("Void: Used as function return type or pointer type (no data stored)\n\n");

    //-----------------------------
    // ✅ CONSTANTS (fixed values)
    //-----------------------------
    const int DAYS_IN_WEEK = 7;  // 'const' keyword makes it unchangeable
    printf("Constant: DAYS_IN_WEEK = %d\n\n", DAYS_IN_WEEK);

    //-----------------------------
    // 🧾 SUMMARY OF BYTE SIZES
    //-----------------------------
    printf("========== 🧾 DATATYPE SIZE SUMMARY ==========\n");
    printf("char = %zu bytes\n", sizeof(char));
    printf("short = %zu bytes\n", sizeof(short));
    printf("int = %zu bytes\n", sizeof(int));
    printf("long = %zu bytes\n", sizeof(long));
    printf("long long = %zu bytes\n", sizeof(long long));
    printf("float = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    printf("long double = %zu bytes\n", sizeof(long double));
    printf("bool = %zu bytes\n", sizeof(bool));

    printf("\n✅ Program finished successfully!\n");

    return 0;
}
