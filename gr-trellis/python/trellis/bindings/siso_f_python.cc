/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(siso_f.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a6f43448cf34073f406aa5fc81522fab)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/siso_f.h>
// pydoc.h is automatically generated in the build directory
#include <siso_f_pydoc.h>

void bind_siso_f(py::module& m)
{

    using siso_f = ::gr::trellis::siso_f;


    py::class_<siso_f, gr::block, gr::basic_block, std::shared_ptr<siso_f>>(
        m, "siso_f", D(siso_f))

        .def(py::init(&siso_f::make),
             py::arg("FSM"),
             py::arg("K"),
             py::arg("S0"),
             py::arg("SK"),
             py::arg("POSTI"),
             py::arg("POSTO"),
             py::arg("d_SISO_TYPE"),
             D(siso_f, make))


        .def("FSM", &siso_f::FSM, D(siso_f, FSM))


        .def("K", &siso_f::K, D(siso_f, K))


        .def("S0", &siso_f::S0, D(siso_f, S0))


        .def("SK", &siso_f::SK, D(siso_f, SK))


        .def("POSTI", &siso_f::POSTI, D(siso_f, POSTI))


        .def("POSTO", &siso_f::POSTO, D(siso_f, POSTO))


        .def("SISO_TYPE", &siso_f::SISO_TYPE, D(siso_f, SISO_TYPE))


        .def("set_FSM", &siso_f::set_FSM, py::arg("FSM"), D(siso_f, set_FSM))


        .def("set_K", &siso_f::set_K, py::arg("K"), D(siso_f, set_K))


        .def("set_S0", &siso_f::set_S0, py::arg("S0"), D(siso_f, set_S0))


        .def("set_SK", &siso_f::set_SK, py::arg("SK"), D(siso_f, set_SK))


        .def("set_POSTI", &siso_f::set_POSTI, py::arg("posti"), D(siso_f, set_POSTI))


        .def("set_POSTO", &siso_f::set_POSTO, py::arg("posto"), D(siso_f, set_POSTO))


        .def("set_SISO_TYPE",
             &siso_f::set_SISO_TYPE,
             py::arg("type"),
             D(siso_f, set_SISO_TYPE))

        ;
}