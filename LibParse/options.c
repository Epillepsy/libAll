#include "parse.h"

void opt_v(char * opt) {
	if (opt != NULL)
		my_putstr("opt v est appelé\n");		
	my_putstr("v est appelé \n");
}

void opt_c(char * opt) {
	if (opt != NULL)
		my_putstr("opt c est appelé\n");
	my_putstr("c est appelé \n");

}

void opt_verbose(char * opt) {
	if (opt != NULL)
		my_putstr("opt force est appelé\n");
	my_putstr("force est appelé\n");
}