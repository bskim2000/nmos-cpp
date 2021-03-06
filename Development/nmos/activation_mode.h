#ifndef NMOS_ACTIVATION_MODE_H
#define NMOS_ACTIVATION_MODE_H

#include "nmos/string_enum.h"

namespace nmos
{
    // Connection API activation mode
    // See https://github.com/AMWA-TV/nmos-device-connection-management/blob/v1.0/APIs/schemas/v1.0-activation-schema.json
    struct activation_mode : public string_enum<activation_mode>
    {
        explicit activation_mode(utility::string_t name) : string_enum{ std::move(name) } {}
    };

    namespace activation_modes
    {
        const activation_mode activate_immediate{ U("activate_immediate") };
        const activation_mode activate_scheduled_relative{ U("activate_scheduled_relative") };
        const activation_mode activate_scheduled_absolute{ U("activate_scheduled_absolute") };
    }
}

#endif
