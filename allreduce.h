/*
Copyright (c) 2011 Yahoo! Inc.  All rights reserved.  The copyrights
embodied in the content of this file are licensed under the BSD
(revised) open source license

This implements the allreduce function of MPI.  

 */

#ifndef ALLREDUCE_H
#define ALLREDUCE_H
#include <string>

void all_reduce(float* buffer, int n, std::string master_location, size_t unique_id, size_t total, size_t node);
void get_kids_vectors(std::string master_location, char *child_buffer[2], int n, size_t unique_id, size_t total, size_t node, int **child_sockets);
void broadcast_buffer(char* buffer, int n);
void send_to_parent(char *buffer, int n);

#endif
