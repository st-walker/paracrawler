#include <stdio.h>
#include <string>

#include <curl/curl.h>


namespace kraal {

class PageGetter {
public:
  PageGetter();
  ~PageGetter();
  std::string get(std::string address);
  
  
private:
  CURL *curl;
  char errbuf[CURL_ERROR_SIZE];
};

} // namespace kraal
