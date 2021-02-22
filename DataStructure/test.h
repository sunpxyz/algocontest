/*
 * test.h
 *
 *  Created on: 2016Äê7ÔÂ5ÈÕ
 *      Author: sunix_prog
 */

#ifndef SOURCE_TEST_H_
#define SOURCE_TEST_H_

struct A {
	A() {
		elemt = 0;
	}

	A(int i) {
		elemt = i;
		std::cout << elemt << std::endl;
	}

	int elemt;
};


struct B {
	B() {
		a = A(0);
	}

	B(A& a) {
		this->a = a;
	}

	A a;
};

#endif /* SOURCE_TEST_H_ */
