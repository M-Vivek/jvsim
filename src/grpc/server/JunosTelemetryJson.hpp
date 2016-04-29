//
//  JunosTelemetryJson.hpp
//  Telemetry Agent
//
//  Created by ABBAS SAKARWALA on 4/29/16.
//  Copyright © 2016 Juniper Networks. All rights reserved.
//

#ifndef JunosTelemetryJson_hpp
#define JunosTelemetryJson_hpp

#include <string>
#include "json/json.h"

extern std::string export_profile;
extern std::string streaming_server;
extern std::string sensor_config;

// Junos configuration methods for setting various Json configuration
class JunosTelemetryJson {
public:
    void set_json_export_profile(std::string export_profile_name,
                                 uint32_t sampling_frequency,
                                  Json::Value *json_obj);
    void set_json_streaming_server(std::string streaming_server_name,
                                   std::string grpc_udp_ip,
                                   uint32_t grpc_udp_port,
                                   Json::Value *json_obj);
    void set_json_sensor_config(bool mqtt,
                                std::string sensor_name,
                                std::string streaming_server_name,
                                std::string export_profile_name,
                                std::string path,
                                std::string filter,
                                uint32_t internal_subscription_id,
                                Json::Value *json_obj);
};

#endif /* JunosTelemetryJson_hpp */