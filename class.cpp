#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>



int main() {
  std::ifstream afile("A.txt");
  std::ifstream bfile("b.txt");
  std::string aline;
  std::string bline;

  std::vector<std::vector<int> > A;
  std::vector<int> b;
  while (std::getline(afile, aline)) {
    std::vector<int> row;
    std::stringstream line_stream(aline);
    int value;
    while (line_stream >> value) {
        row.push_back(value);
    }
    A.push_back(row);
  }
  while (std::getline(bfile, bline)) {
    int camu= stoi(bline);
    b.push_back(camu);
  }
  for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[i].size(); j++) {
            std::cout << 1*A[i][j] << " "<<std::endl;
        }
        std::cout << "| " << b[i] << std::endl;
    }
  bfile.clear();
  bfile.seekg(0, std::ios::beg);
  afile.clear();
  afile.seekg(0, std::ios::beg);
  afile.close();
  bfile.close();
  return 0;
}


