ARG http_proxy=http://proxy-chain.intel.com:911
ARG https_proxy=http://proxy-chain.intel.com:912
FROM buildpack-deps:latest

RUN apt-get update && apt-get install -y cmake

WORKDIR /usr/project

COPY .      /usr/project/src

RUN mkdir build && cd build && cmake ../src && make -j 4

CMD ["/usr/project/build/mylib/test/mylib_test"]
