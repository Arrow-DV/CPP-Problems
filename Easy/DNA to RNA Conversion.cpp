#include <string>

std::string DNAtoRNA(std::string dna){

      for ( int i = 0 ; i < (int) dna.size() ; i ++ ){
          dna[i] == 'T' ? dna[i] = 'U' : dna[i];
      }
      return dna;
}