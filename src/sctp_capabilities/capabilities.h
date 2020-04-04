#pragma once
#include <re.h>

#if defined(HAVE_STDINT_H)
#include <stdint.h>
#endif

struct rawrtc_sctp_capabilities {
    uint64_t max_message_size;
};
