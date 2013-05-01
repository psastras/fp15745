#include "llvm/BasicBlock.h"
namespace llvm{
int BBId(const BasicBlock* BB);
double randWeight(const BasicBlock* BB);
extern char& LoadHistoryID;
extern char& StoreHistoryID;
}
