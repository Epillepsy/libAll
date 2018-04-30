/*
** formatOpt.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "parse.h" 
char* arrayOfOptions[] = {
	"-v",
	"-c",
	"--verbose"
};
int k_numberOfOptions = 3;

int 		num_opt(char **argv)
{
	int 	i;
	int 	j;

	j = 0;
	i = 1;
	while (argv[i] != '\0')
	{
		if (argv[i][0] == '-')
			j++;
		i++;
	}
	return (j);
}

t_vector 		*return_opts(int argc, char **argv)
{
	int			i;
	t_vector 	*args;
	t_vector   	*tmp;
	t_arguments	*arg;

	i = 1;
	args = NewEmptyVector();
	while (i < argc)
	{
		if (argv[i][0] == '-') {
			arg = createArgumentNode(get_index(argv[i]));
			if (arg != NULL) {
				if (i + 1 < argc && argv[i + 1][0] != '-') {
					arg->value = argv[++i];
				}
				else {
					arg->value = NULL;
				}
				tmp =  NewVector(arg, 'o');
				args = push(args, tmp);
			}
		}
		else
			i = argc;
		i++;
	}
	return (args);
}

t_arguments *createArgumentNode(int index) {
	t_arguments *node;
	char *name;

	if (index == -1) {
		return (NULL);
	}
	name = arrayOfOptions[index];
	node = malloc(sizeof(t_arguments*));
	node->name = my_strdup(name);
	node->method = ptrOptions[index];
	return (node);
}

int get_index(char* option) {
	int i;

	i = 0;
	while (i < k_numberOfOptions) {
		if (my_strcmp(arrayOfOptions[i], option) == 0) {
			return (i);
		}
		i++;
	}
	my_putstr("Unrecognized option: ");
	my_putstr(option);
	my_putchar('\n');
	return (-1);
}

void execOpt(t_vector *args) {
	t_arguments *arg;
	arg = malloc(sizeof(t_vector));

	while (args->next != NULL) {
		if ((arg = (t_arguments*) args->data) == NULL) {
			return;
		}
		arg->method(arg->value);
		args = args->next;
	}
	free_vector(args);
}

void my_setUpArrayPtr() {
	ptrOptions[get_index("-v")] = &opt_v;
	ptrOptions[get_index("-c")] = &opt_c;
	ptrOptions[get_index("--verbose")] = &opt_verbose;
}