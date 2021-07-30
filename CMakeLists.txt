cmake_minimum_required(VERSION 3.20)
project(cashier_app)

set(CMAKE_CXX_STANDARD 14)

include_directories(storecashierprogram)

add_executable(cashier_app
        storecashierprogram/Brand.cpp
        storecashierprogram/Brand.h
        storecashierprogram/cashregister.cpp
        storecashierprogram/cashregister.h
        storecashierprogram/coupon.cpp
        storecashierprogram/coupon.h
        storecashierprogram/main.cpp
        storecashierprogram/manager.cpp
        storecashierprogram/manager.h
        storecashierprogram/resource.h
        storecashierprogram/storeitem.cpp
        storecashierprogram/storeitem.h)
