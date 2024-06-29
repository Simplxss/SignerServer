#pragma once

#include "sign.h"
#include "../include/cpp-httplib/httplib.h"

class Server
{
private:
    httplib::Server svr;
    std::atomic<uint64_t> counter = 0;

private:
    std::string Server::GetSign(const std::string_view &cmd, const std::string_view &src, const int seq);

public:
    void Init();
    bool Server::Run(const std::string &ip, int port);
};