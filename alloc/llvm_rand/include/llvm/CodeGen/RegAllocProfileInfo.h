/*
 * RegAllocProfileInfo.h
 *
 *  Created on: Apr 17, 2013
 *      Author: robertshih
 */

#ifndef REGALLOCPROFILEINFO_H_
#define REGALLOCPROFILEINFO_H_

#include "llvm/Analysis/ProfileInfo.h"
namespace llvm{
class RegAllocProfileInfo : public ProfileInfo {
  std::string Filename;
  Module *M;
  void readEdge
    (ProfileInfo::Edge e,
     std::vector<unsigned> &ECs,
     unsigned& ReadCount);
public:
  RegAllocProfileInfo
    (Function* F, const std::string &filename = "llvmprofile.out");
  void dump();
};
}

#endif /* REGALLOCPROFILEINFO_H_ */
