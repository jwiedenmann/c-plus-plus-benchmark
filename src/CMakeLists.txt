add_executable(example_exe main.cpp)
target_link_libraries(
    example_exe
    PRIVATE sfml-graphics
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)