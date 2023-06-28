cmake_minimum_required(VERSION 3.24)
project(hotel_reservation_finnish_cplus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hotel_reservation_finnish_cplus
        main.cpp
        menu.h
        moneyMachine.h
        reservation.h
        room_struct.h)
