#include "print_test.h"

void print_number(int value) {
	char num_str[10];
	int i = 0;
	bool is_negative = false;

	if (value == 0) {
		putchar('0');
		return;
	}

	if (value < 0) {
		is_negative = true;
		value = -value;
	}

	while (value != 0) {
		num_str[i++] = (value % 10) + '0';
		value /= 10;
	}

	if (is_negative) {
		putchar('-');
	}

	while (i--) {
		putchar(num_str[i]);
	}
}

void printf_format(const char *format, ...) {
	va_list args;
	va_start(args, format);

	while (*format != '\0') {
		if (*format == '%') {
			format++;
			switch (*format) {
				case 's': {
						  char *str = va_arg(args, char*);
						  while (*str) {
							  putchar(*str++);
						  }
						  break;
					  }
				case 'd': {
						  int d = va_arg(args, int);
						  print_number(d);
						  break;
					  }
			}
		} else {
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}




