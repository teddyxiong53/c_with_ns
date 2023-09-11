-- 定义项目
target("test")
    -- 设置项目类型为可执行文件
    set_kind("binary")
    add_includedirs("mylib")
    -- 添加源文件，包括mylib目录下的所有.c文件和test.c
    add_files("mylib/**/*.c", "mylib/mylib.c", "test.c")

-- 设置C编译选项
set_languages("c")
set_toolchains("gcc")

-- 定义clean目标
target("clean")
    set_kind("phony")
    on_clean(function (target)
        os.rm("xmake.lua")
        os.rm("xmake.lock")
        os.rm("xmake_build")
    end)
