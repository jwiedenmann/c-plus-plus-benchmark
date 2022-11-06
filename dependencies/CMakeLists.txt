include(FetchContent)

#FetchContent_Declare(
#   sfml
#   URL https://github.com/SFML/SFML/archive/refs/tags/2.5.1.zip
#   URL_HASH 2c4438b3e5b2d81a6e626ecf72bf75be
#)

FetchContent_Declare(
    sfml
    GIT_REPOSITORY "https://github.com/SFML/SFML"
    GIT_TAG 2f11710abc5aa478503a7ff3f9e654bd2078ebab # 2.5.1
)

FetchContent_Declare(
    ftxui
    GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
    GIT_TAG dfdbe1eecf0451e0da5420c4b9c39ecb415681ac
)

add_subdirectory(sfml)
add_subdirectory(ftxui)