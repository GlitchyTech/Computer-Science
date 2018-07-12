#include <iostream>

struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() { }
};

// ������ ValueHolder � ������� ���������� T,
// ������ ��������� ���� �������� ���� data_
// ���� T.
//
// � ������� ValueHolder ������ ���� ���������
// ����������� �� ������ ��������� ���� T,
// ������� �������������� ���� data_.
//
// ������ ValueHolder ������ �������������
// ��������� ICloneable, � ���������� ���������
// �� ����� �������, ��������� � ����, �� ������
// clone.

template <typename T>
struct ValueHolder : ICloneable { // ������ ��������������
    ValueHolder(T value)
        : data_(value) {}

    ICloneable* clone() const {
        return new ValueHolder(data_);
    }

    T data_;
};

int main(){

}
