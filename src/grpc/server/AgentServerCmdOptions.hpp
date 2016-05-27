//
//  AgentServerCmdOptions.hpp
//  Telemetry Agent
//
//  Created: 2/26/16.
//
//  Authors: NITIN KUMAR
//           ABBAS SAKARWALA
//
//  Copyright © 2016 Juniper Networks. All rights reserved.
//

#ifndef AgentServerCmdOptions_hpp
#define AgentServerCmdOptions_hpp

#include <string>

class AgentServerCmdOptions {
    char *_logfile;

    bool _file_mode;
    char *_system_file_name;

    bool _null_mode;
    bool _proc_mode;

    char *_ini_config_file;

public:
    AgentServerCmdOptions() {
        _logfile = NULL;
        _system_file_name = NULL;
        _file_mode = _null_mode = _proc_mode = false;
        _ini_config_file = NULL;
    }

    ~AgentServerCmdOptions() {
    }

    char *getLogFile(void)          { return _logfile; }
    char *getSystemFileName(void)   { return _system_file_name; }
    bool isSystemModeNull(void)     { return _null_mode; }
    bool isSystemModeProc(void)     { return _proc_mode; }
    bool isSystemModeFile(void)     { return _file_mode; }
    char *getIniConfigFile(void)    { return _ini_config_file; }

    void setLogFile(std::string logfile);
    void setFileMode(bool mode);
    void setFileName(std::string file);
    void setNullMode(bool mode);
    void setProcMode(bool mode);
    void setINIConfigFile(std::string ini_config_file);
    void printUsage(void);
    bool parseArgs(int argc, char **argv);

};

#endif /* AgentServerCmdOptions_hpp */