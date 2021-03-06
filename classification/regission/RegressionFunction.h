/**
 * Copyright(c) 2012 - 2013 minglin. All rights reserved.
 */

#ifndef _REGRESSION_FUNCTION_H_
#define _REGRESSION_FUNCTION_H_

class RegressionFunction {
public:
	virtual long double operator()(const float* sample,
		const long double* params,
		int len)const = 0;
};

#endif
