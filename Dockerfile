FROM buildpack-deps:latest

WORKDIR /usr/project

COPY .      /usr/project/src

RUN mkdir build && cd build && cmake ../src && make -j 4

CMD ["./build/app/app"]
