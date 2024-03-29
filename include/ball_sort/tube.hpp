#pragma once

#include <string>

class Solver;

class Tube {
 public:
    Tube(const std::string &balls);

    auto operator==(const Tube &other) const -> bool = default;

    auto is_empty() const -> bool;
    auto is_full() const -> bool;
    auto is_one_colour() const -> bool;
    auto is_solved() const -> bool;
    auto get_balls() const -> const std::string &;
    auto get_top_ball() const -> char;
    auto get_serialised_balls() const -> std::string;
    auto take_top_ball() -> char;
    auto place_ball(const char ball) -> void;

    static const size_t MAX_CAPACITY{4};

 private:
    std::string m_balls;
};
