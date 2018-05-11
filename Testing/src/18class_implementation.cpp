#include <cstdio>
#include "17class_interface.h"

// ==========================================Implementation=============================
void separated::setValue(int receivedValue) {
	b = receivedValue;
}

void separated::getValue() {
	printf("The value a in class setGet is %d\n", b);
}

