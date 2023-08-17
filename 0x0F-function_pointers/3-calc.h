#ifndef CALC_H
#define CALC_H
/**
 * struct op - a struct op
 * @opp: the operation
 * @f: the coreresponding func
 */
typedef struct op
{
	char *opp;
	int(*f)(int x, int y);
}opt_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_func(char *s))(int, int);

#endif
