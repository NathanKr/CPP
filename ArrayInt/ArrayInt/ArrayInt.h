#pragma once
class ArrayInt
{
public:
	ArrayInt(size_t length);

	// --- operator =
	ArrayInt & operator=(const ArrayInt & obj);
	
	// --- copy constructor
	ArrayInt(const ArrayInt & obj);

	void Set(size_t index, int nVal);
	
	int Get(size_t index) const;

	size_t GetLength() const;
	
	~ArrayInt();

private:
	size_t m_length;
	int * m_arInt;
	void copy(const ArrayInt & obj);
};

