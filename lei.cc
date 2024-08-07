#include <iostream>

template <typename T>
class Box {
public:
    Box(T value) : m_value(value) {}
    T getValue() const { return m_value; }
    void setValue(T newValue) { m_value = newValue; }

private:
    T m_value;
};

int main() {
    Box<int> intBox(123);
    Box<double> doubleBox(456.78);

    std::cout << "Int Box contains: " << intBox.getValue() << std::endl;
    std::cout << "Double Box contains: " << doubleBox.getValue() << std::endl;

    intBox.setValue(456);
    doubleBox.setValue(789.01);

    std::cout << "Int Box now contains: " << intBox.getValue() << std::endl;
    std::cout << "Double Box now contains: " << doubleBox.getValue() << std::endl;

    return 0;
}

