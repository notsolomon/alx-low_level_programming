#ifndef PROTOTYPES
#define PROTOTYPES

/**
 * struct op - struct op
 * @op: operator
 * @f: associated function
 */

typedef struct op
{
	char *op;
	int (*f)(*int a, int b);
} op_t;

/** Function Prototypes **/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/** Selects correct function to perform 
 * asked for operation
 */

int (*get_op_func(char *s))(int, int);

#endif
