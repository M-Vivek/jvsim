//
//  AgentSystemFile.hpp
//  Telemetry Agent
//
//  Created by NITIN KUMAR on 2/27/16.
//  Copyright © 2016 Juniper Networks. All rights reserved.
//

#ifndef AgentSystemFile_hpp
#define AgentSystemFile_hpp

#include "AgentSystem.hpp"

class AgentSystemFile: public AgentSystem {
    // Destination file
    std::ofstream _outputFile;
    
public:
    AgentSystemFile (AgentServerLog *logger, std::string file_name) :
                                AgentSystem(logger), _outputFile(file_name) {}

    // Add into the system
    void systemAdd(SystemId id, const Telemetry::Path *request_path);

    // Remove from the system
    void systemRemove(SystemId id, const Telemetry::Path *request_path);

    // Query the system
    Telemetry::Path * systemGet(SystemId sys_id);
};

#endif /* AgentSystemFile_hpp */