#pragma once
class ArrayInt
{
public:
	ArrayInt(size_t length);


	ArrayInt(const ArrayInt & obj);

	void Set(size_t index, int nVal);
	
	int Get(size_t index) const;

	size_t GetLength() const;
	
	~ArrayInt();

private:
	size_t m_length;
	int * m_arInt;
};

