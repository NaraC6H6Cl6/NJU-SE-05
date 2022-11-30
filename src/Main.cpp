/**
 * @file Main.cpp
 * @author Lingzhou Ai (https://github.com/NaraC6H6Cl6/)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "InputGroup.hpp"
#include "InputProcedure.hpp"
#include "EquivalenceJudgment.hpp"
#include "OutputProcedure.hpp"
#include <iostream>

int
main()
{
  const auto& Groups = Phoenix::GetInputGroups();
  for (auto& Group : Groups) {
    const auto& Set = Hikari::EquivalenceJudgement(*Group);
    Violet::OutputResult(*Group, Set);
  }
  return 0;
}