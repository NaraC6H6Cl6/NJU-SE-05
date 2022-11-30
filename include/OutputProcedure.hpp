/**
 * @file OutputProcedure.hpp
 * @author Lingzhou Ai (https://github.com/NaraC6H6Cl6/)
 * @brief 
 * @version 0.2
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _OutputProcedure_H
#define _OutputProcedure_H


#include "UnionFindSet.hpp"
#include <filesystem>


namespace Plum {
  class InputGroup;
}


namespace Violet
{

void
OutputResult(const Plum::InputGroup& Group,
             const Cascade::UnionFindSet<std::filesystem::path>& Set);

}



#endif
