/*
 * Copyright (c) 2022, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Forward.h>

namespace Web::Platform {

enum class GenericFont {
    Cursive,
    Fantasy,
    Monospace,
    SansSerif,
    Serif,
    UiMonospace,
    UiRounded,
    UiSansSerif,
    UiSerif,
    __Count,
};

class FontPlugin {
public:
    static FontPlugin& the();
    static void install(FontPlugin&);

    virtual ~FontPlugin();

    virtual String generic_font_name(GenericFont) = 0;
};

}
