/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuchs <pfuchs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:26:28 by pfuchs            #+#    #+#             */
/*   Updated: 2022/05/09 14:09:46 by pfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE
#define PUZZLE

#include <cstdint>
#include <vector>

class Puzzle {
   public:
    Puzzle();
    Puzzle(const std::vector<uint8_t> &data);
    Puzzle(const Puzzle &puzzle);
    ~Puzzle();

    Puzzle &operator=(Puzzle puzzle);

    void print() const;

    uint8_t get(uint8_t id) const { return data_[id]; }
    void set(uint8_t id, uint8_t value) { data_[id] = value; }
    uint8_t get(uint8_t x, uint8_t y) const { return data_[x + y * sizeX_]; }
    const uint8_t *getData() const { return data_; }
    uint8_t getSizeX() const { return sizeX_; }
    uint8_t getSizeFull() const { return sizeFull_; }

    friend void swap(Puzzle &first, Puzzle &second) {
        std::swap(first.data_, second.data_);
    }

   protected:
    uint8_t *data_;
    static uint8_t sizeX_;
    static uint8_t sizeFull_;
};

#endif  // PUZZLE
