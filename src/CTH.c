//
//  CTH.c
//  CTH
//
//  Created by Sam Marshall on 2/16/15.
//  Copyright (c) 2015 Sam Marshall. All rights reserved.
//

#include "CTH.h"


int perform_test(unit_test *test)
{
	unit_test current = (*test);
	
	// perform setup
	current.setup.return_value = current.setup.call(current.setup.in_value, current.setup.out_value);
	
	
	// perform setup
	current.test.return_value = current.test.call(current.test.in_value, current.test.out_value);
	
	
	// perform setup
	current.teardown.return_value = current.teardown.call(current.teardown.in_value, current.teardown.out_value);
	
	
}