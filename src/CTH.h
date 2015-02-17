//
//  CTH.h
//  CTH
//
//  Created by Sam Marshall on 2/16/15.
//  Copyright (c) 2015 Sam Marshall. All rights reserved.
//

#ifndef __CTH__CTH__
#define __CTH__CTH__

#include <stdlib.h>

typedef uintptr_t *Pointer;
typedef uintptr_t *(*FunctionPointer)();

typedef enum cth_test_type {
	cth_test_type_invalid = 0,
	
	cth_test_type_setup,
	cth_test_type_test,
	cth_test_type_teardown,
	
	cth_test_type_count
} cth_test_type;

typedef struct test_func {
	cth_test_type type;
	
	Pointer return_value;
	FunctionPointer call;
	Pointer in_value;
	Pointer out_value;
	
} test_func;

typedef struct unit_test {
	test_func setup;
	test_func test;
	test_func teardown;
} unit_test;

int perform_test(unit_test *test);

#endif /* defined(__CTH__CTH__) */
