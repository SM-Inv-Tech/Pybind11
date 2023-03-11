#include <string>
#include <utility>

#include "pybind11/pybind11.h"

class Pet
{
public:
    explicit Pet(const std::string &_name) : name(_name)
    {}

public:
    void set_name(const std::string &new_name)
    {
        name = new_name;
    }

    const std::string &get_name() const
    {
        return name;
    }

public:
    std::string name;
};


PYBIND11_MODULE(chapter_2, m)
{
    pybind11::class_<Pet>(m, "Pet")
            .def(pybind11::init<const std::string &>())
            .def("set_name", &Pet::set_name)
            .def("get_name", &Pet::get_name)
            .def_readwrite("name", &Pet::name)
            .def("__repr__",
                 [](const Pet &a) {
                     return "<example.Pet named '" + a.name + "'>";
                 });
}