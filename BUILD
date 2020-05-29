cc_binary(
    name = 'main',
    srcs = [ 'main.cpp' ],
    deps = [ ':context',
             ':object' ])

cc_library(
    name = 'context',
    srcs = [ 'context.cpp' ],
    deps = [ ':context_hdrs',
             ':object_hdrs' ])

cc_library(
    name = 'context_hdrs',
    hdrs = [ 'context.hpp' ])

cc_library(
    name = 'object',
    srcs = [ 'object.cpp' ],
    deps = [ ':context_hdrs',
             ':object_hdrs' ])

cc_library(
    name = 'object_hdrs',
    hdrs = [ 'object.hpp' ])
