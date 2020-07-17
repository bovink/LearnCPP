/*
 * TemplateWhat.h
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#ifndef TEMPLATEWHAT_H_
#define TEMPLATEWHAT_H_

template<class T> class TemplateWhat {
public:
	TemplateWhat();
	virtual ~TemplateWhat();

	void exeSomeOp(T* t);
private:
	T* b;
};

#endif /* TEMPLATEWHAT_H_ */
