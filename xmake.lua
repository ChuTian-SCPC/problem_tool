add_rules("mode.debug", "mode.release")

target("generator")
    set_kind("headeronly")
    add_includedirs("src") 
    add_headerfiles("src/basic/*.h")
    add_headerfiles("src/io/*.h")
    add_headerfiles("src/log/*.h")
    add_headerfiles("src/include_all.h")
    



