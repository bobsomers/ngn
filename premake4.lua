solution "ngn"
    configurations {
        "debug",
        "release"
    }

    configuration "debug"
        defines {
            "NGN_DEBUG"
        }
        flags {
            "Symbols",
            "ExtraWarnings",
            "OptimizeSpeed",
            "EnableSSE",
            "EnableSSE2"
        }

    configuration "release"
        defines {
            "NGN_RELEASE"
        }
        flags {
            "OptimizeSpeed",
            "ExtraWarnings",
            "EnableSSE",
            "EnableSSE2"
        }

    configuration {"linux", "gmake"}
        buildoptions {
            "-std=c++11"
        }

    project "libngn"
        kind "SharedLib"
        language "C++"
        targetdir "lib"
        targetname "ngn"
        files {
            "src/lib/ngn/**.cpp"
        }
        includedirs {
            "src/lib"
        }

    project "ngnrun"
        kind "ConsoleApp"
        language "C++"
        targetdir "bin"
        targetname "ngnrun"
        files {
            "src/bin/ngnrun/**.cpp"
        }
        includedirs {
            "src/lib"
        }
        libdirs {
            "lib"
        }
        links {
            "libngn"
        }
