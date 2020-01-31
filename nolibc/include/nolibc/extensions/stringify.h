#pragma once

#define _Stringify_delayed(x) \
    #x

#define _Stringify(x) \
    _Stringify_delayed(x)
