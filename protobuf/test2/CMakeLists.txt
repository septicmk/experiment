cmake_minimum_required(VERSION 3.1.2)
project(person CXX)


find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS person.proto)
add_executable(person main.cc ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(person ${PROTOBUF_LIBRARY})

