/*
 * EasyDSP, A cross-platform Digital Signal Processing library written in modern C++.
 * Copyright (C) 2018 Mohammed Boujemaoui Boulaghmoudi
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along withº
 * this program.  If not, see <http://www.gnu.org/licenses/>
 *
 * Filename: unused.hpp
 * Author: Mohammed Boujemaoui
 * Date: 31/7/2018
 */
#ifndef EASYMETA_UNUSED_HPP
#define EASYMETA_UNUSED_HPP

#include "data.hpp"
#include <string>

namespace easy { namespace meta {

    template <typename T>
    constexpr void unused(const T& variable) {
        (void) variable;
    }

    template <typename T>
    constexpr void unused(const T& variable, const char* message) {
        unused(variable);
        unused(message);
    }

    template <typename T, typename Char>
    constexpr void unused(const T& variable, const std::basic_string<Char>& message) {
        unused(variable, meta::data(message));
    }

}} // namespace easy::meta

#endif // UNUSED_HPP