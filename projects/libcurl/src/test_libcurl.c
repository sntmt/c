#include <stdio.h>

#include "curl/curl.h"
#include "curl/easy.h"

int main(void) {
  CURL *curl;
  CURLcode res;

  curl = curl_easy_init();
  if (curl) {
    curl_easy_setopt(
        curl, CURLOPT_URL,
        "https://043be4e181634694a701292061234215.api.mockbin.io/");

    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
      fprintf(stderr, "failed %s\n", curl_easy_strerror(res));
    }

    curl_easy_cleanup(curl);
  }

  return 0;
}
