#include "llvm/BasicBlock.h"
#include "llvm/CodeGen/MachineFunction.h"
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/InitializePasses.h"
#include "llvm/Support/raw_ostream.h"

#include <cstdio>
#include <cmath>
#include <string>
#include <random>
#include <string>


#include <sstream>


#include "llvm/ADT/StringRef.h"
#include "llvm/CodeGen/WeightHistory.h"

using namespace llvm;

#define RUNS (20)
struct Record{
  double weight[RUNS];
};

#define BBs (65535)
Record History[BBs];

int run;
#define COUNT (128)
void loadHistory(const char*path){
  FILE* hFile=fopen(path,"rb");
  if(!hFile){
    errs()<<"warn: error opening "<<path<<"\n";
    return;
  }

  fread(&run,sizeof(int),1,hFile);
  run++;

  int count;
  Record* r=History;
  do{
    count=fread(r,sizeof(Record),COUNT,hFile);
    r+=count;
  }while(count==COUNT);
  fclose(hFile);
}

#define HIST ".weight_history"
bool filled[BBs];
void initHistory(const char*path=0){
  for(int i=0;i<BBs;i++){
    filled[i]=false;
    for(int j=0;j<RUNS;j++)
      History[i].weight[j]=1.0;
  }
  const char* p=path?path:HIST;
  loadHistory(p);
}

void storeHistory(const char*path=0){
  FILE* hFile=fopen(path?path:HIST, "wb");
  fwrite(&run,sizeof(int),1,hFile);
  fwrite(History,sizeof(Record),BBs,hFile);
  fclose(hFile);
}


int from_string(std::string const & s) {
    std::stringstream ss(s);
    int result;
    ss >> result;    // TODO handle errors
    return result;
}

int stoi(std::string const & s)
{
  return from_string(s);
}

int llvm::BBId(const BasicBlock* BB){
  return stoi(BB->getName().drop_front().str());
}

#define MEAN (5.0)
#define DEV (2.0)
#define DELTA (1e-5)
#define MIN (1.0)
#define MAX (10.0)
std::tr1::mt19937 Eng;
std::tr1::normal_distribution<double> Dist(MEAN,DEV);
double llvm::randWeight(const BasicBlock* BB){
  // int idx = BBId(BB);
  // errs() << idx << "\n";
  // if(filled[idx])
  //   return History[idx].weight[run];

  // filled[idx]=true;
  // // errs() << "gensr\n";
  // while(1){
  //   double w= ((double) rand() / (RAND_MAX))*10.0; //Dist(Eng);
  //   // errs() << w << "\n";
  //   if(w<MIN || w>MAX)
  //     continue;
  //   int i;
  //   for(i=0;i<run;i++)
  //     if(fabs(w-History[idx].weight[i])<DELTA)
  //       break;
  //   if(i==run){
  //     History[idx].weight[run]=w;
  //     return w;
  //   }
  // }
  // errs() << "genr done\n";
  return ((double) rand() / (RAND_MAX))*10.0;
}

bool loaded=false,stored=false;
namespace{
  struct LoadHistory: public MachineFunctionPass{
    static char ID;
    LoadHistory() :
        MachineFunctionPass(ID) {
    }
    virtual bool runOnMachineFunction(MachineFunction& MF){
      if(!loaded){
        initHistory();
        loaded=true;
      }
      return false;
    }
  };

  struct StoreHistory: public MachineFunctionPass{
    static char ID;
    StoreHistory() :
        MachineFunctionPass(ID) {
    }
    virtual bool runOnMachineFunction(MachineFunction& MF){
      if(!stored){
        storeHistory();
        stored=true;
      }
      return false;
    }
  };

}

char LoadHistory::ID = 0;
char &llvm::LoadHistoryID = LoadHistory::ID;
INITIALIZE_PASS(LoadHistory, "loadhistory",
                "Load weight history", false, false)

char StoreHistory::ID = 0;
char &llvm::StoreHistoryID = StoreHistory::ID;
INITIALIZE_PASS(StoreHistory, "storehistory",
                "Store weight history", false, false)
