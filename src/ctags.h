#ifndef JUCI_CTAGS_H_
#define JUCI_CTAGS_H_
#include <string>
#include <boost/filesystem.hpp>
#include <sstream>
#include <vector>

class Ctags {
public:
  class Location {
  public:
    boost::filesystem::path file_path;
    unsigned long line;
    unsigned long index;
    std::string source;
    operator bool() const { return !file_path.empty(); }
  };
  
  static std::pair<boost::filesystem::path, std::unique_ptr<std::stringstream> > get_result(const boost::filesystem::path &path);
  
  static Location parse_line(const std::string &line, bool markup);
  
  static Location get_location(const boost::filesystem::path &path, const std::string &name, const std::string &type);
};

#endif //JUCI_CTAGS_H_