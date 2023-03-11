#include <pybind11/pybind11.h>


////////////////////////////////////////////////////////////////////////
/// \brief        C++求和
/// \param i      参数1
/// \param j      参数2
/// \return       求和结果
int add(int i = 1, int j = 2)
{
    return i + j;
}


PYBIND11_MODULE(chapter_1, m)
{
    m.doc() = "hello pybind11";
    m.def("add", &add, "两整型数字求和", pybind11::arg("i") = 1, pybind11::arg("j") = 2);
}