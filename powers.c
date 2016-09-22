#include <stdio.h>

#define p(n, p, x) printf("#define POWER_%-3d %-22g /* %s %-22a */\n", n, x, p, x)

int main ()
{
	p(27,  " ", 1e27);
	p(24,  "Y", 1e24);
	p(21,  "Z", 1e21);
	p(18,  "E", 1e18);
	p(15,  "P", 1e15);
	p(12,  "T", 1e12);
	p(9,   "G", 1e9);
	p(6,   "M", 1e6);
	p(3,   "k", 1e3);
	p(0,   " ", 1e0);
	p(-3,  "m", 1e-3);
	p(-6,  "µ", 1e-6);
	p(-9,  "n", 1e-9);
	p(-12, "p", 1e-12);
	p(-15, "f", 1e-15);
	p(-18, "a", 1e-18);
	p(-21, "z", 1e-21);
	p(-24, "y", 1e-24);
	p(-27, " ", 1e-27);
}