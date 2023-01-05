# URI-PARSER

URL encoder/decoder for C++

## Requirements

- C++ 17

## Building & Installation

### Installation

 uri-parser is a header-only library. Just copy the `include` directory to your include path.

### Building examples

```sh
mkdir build
cd build
cmake .. -DBUILD_EXAMPLE=ON
make
```

### Building tests

```sh
mkdir build
cd build
cmake .. -DBUILD_TESTS=ON
make && make test ARGS="-V"
```

### License

#### Boost v1

#### Note

Most of the code in this repository is slight modification of code written by Davis E. King (davis@dlib.net) for dlib. [Original file](http://dlib.net/dlib/server/server_http.cpp.html). If you'd like to donate, do so to the original author, not to me.
