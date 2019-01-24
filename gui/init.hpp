#pragma once

#include "export.hpp"

#include <functional>
#include <memory>
#include <QWidget>

OTR_GUI_EXPORT int otr_main(int argc, char** argv, std::function<std::unique_ptr<QWidget>()> const& make_main_window);

// XXX TODO need split MainWindow into mixins each implementing part of the functionality

template<typename F>
auto run_application(int argc, char** argv, F&& fun)
{
    return otr_main(argc, argv, fun);
}
