/*
** EPITECH PROJECT, 2024
** B-OOP-400-MAR-4-1-tekspice-alexandre.vittenet
** File description:
** C4011
*/

#include "../ACompenent.hpp"

#ifndef C4011_HPP_
#define C4011_HPP_

class C4011 : public nts::ACompenent {
        public:
            C4011();
            ~C4011();
            nts::Tristate compute(std::size_t pin);
            nts::Tristate nand_gate(nts::Tristate pin1, nts::Tristate pin2);
};

#endif /* !C4011_HPP_ */