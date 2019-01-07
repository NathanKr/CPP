#pragma once
template <class T>
class Array
{
public:
	Array(size_t length) {
		m_length = length;
		m_arInt = new T[length];
	}


	Array(const Array & obj) {
		m_length = obj.GetLength();
		m_arInt = new T[m_length];
		for (size_t i = 0; i < m_length; i++) {
			m_arInt[i] = obj.Get(i);
		}
	}

	void Set(size_t index, T nVal) {
		m_arInt[index] = nVal;
	}

	T Get(size_t index) const {
		return m_arInt[index];
	}

	size_t GetLength() const {
		return m_length;
	}

	~Array() {
		delete[] m_arInt;
		m_arInt = 0;//not must but good practice
	}

private:
	size_t m_length;
	T * m_arInt;
};

