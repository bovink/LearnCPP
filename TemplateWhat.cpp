/*
 * TemplateWhat.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#include "TemplateWhat.h"

template<class T>
TemplateWhat<T>::TemplateWhat() {

	b = 0;
}

template<class T>
TemplateWhat<T>::~TemplateWhat() {
	// TODO Auto-generated destructor stub
}

template<class T>
void TemplateWhat<T>::exeSomeOp(T *t) {

	b = t;
}
