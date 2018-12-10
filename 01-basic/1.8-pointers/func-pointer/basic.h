typedef void atexit_function(void);
typedef atexit_type* atexit_function_pointer;
typedef void (*atexit_function_pointer)(void);
// five equivalent declarations for the same function
void atexit(void f(void));
void atexit(void (*f)(void));
void atexit(atexit_function f);
void atexit(atexit_function* f);
void atexit(atexit_function_pointer f);

