/*
 * Wazuh RSYNC
 * Copyright (C) 2015-2020, Wazuh Inc.
 * October 7, 2020.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation.
 */
#include "sysInfo.hpp"

nlohmann::json SysInfo::hardware()
{
    nlohmann::json ret;
    ret["board_serial"] = getSerialNumber();
    ret["cpu_name"] = getCpuName();
    ret["cpu_cores"] = getCpuCores();
    ret["cpu_MHz"] = getCpuMHz();
    getMemory(ret);
    return ret;
}