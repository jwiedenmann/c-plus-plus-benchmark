add_executable(example_exe main.cpp "person.hpp")
target_link_libraries(
    example_exe
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
    PRIVATE nlohmann_json::nlohmann_json
    PRIVATE sfml-graphics
)