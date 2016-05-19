env = Environment()

shlibEnv = env.Clone()
shlib = shlibEnv.SharedLibrary(
    target="foo",
    source=[
        "foo.cpp",
    ]
)

env.AppendUnique(
    LINKFLAGS='-Wl,-rpath=.'
)

progWithPicEnv = env.Clone()
progWithPicEnv.AppendUnique(
    CCFLAGS=[
        '-fPIC',
    ],
    LINKFLAGS=[
        '-fPIC',
    ]
)
progWithPic = progWithPicEnv.Program(
    target="main_pic",
    source=[
        "main.cpp",
    ],
    LIBS=[
        shlib,
    ],
    OBJSUFFIX='.o.pic'
)

progWithPieEnv = env.Clone()
progWithPieEnv.AppendUnique(
    CCFLAGS=[
        '-fPIE',
    ],
    LINKFLAGS=[
        '-pie',
    ],
)

progWithPie = progWithPieEnv.Program(
    target="main_pie",
    source=[
        "main.cpp",
    ],
    LIBS=[
        shlib,
    ],
    OBJSUFFIX='.o.pie'
)
