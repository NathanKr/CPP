#include "ArrayInt.h"


ArrayInt::ArrayInt(size_t length) {
	m_length = length;
	m_arInt = new int[length];
}

void ArrayInt::copy(const ArrayInt & obj) {
	for (size_t i = 0; i < m_length; i++) {
		m_arInt[i] = obj.Get(i);
	}
}

ArrayInt & ArrayInt::operator=(const ArrayInt & obj) {
	if (m_length != obj.GetLength())
	{
		delete m_arInt;
		m_arInt = new int[m_length];
	}
	copy(obj);

	return *this;
}


ArrayInt::ArrayInt(const ArrayInt & obj) {
	m_length = obj.GetLength();
	m_arInt = new int[m_length];
	copy(obj);
}

void ArrayInt::Set(size_t index, int nVal) {
	m_arInt[index] = nVal;
}

int ArrayInt::Get(size_t index) const {
	return m_arInt[index];
}

size_t ArrayInt::GetLength() const {
	return m_length;
}

ArrayInt::~ArrayInt() {
	delete[] m_arInt;
	m_arInt = 0;//not must but good practice
}



