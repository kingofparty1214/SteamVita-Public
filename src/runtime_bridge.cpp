#include "runtime_bridge.h"

RuntimeLaunchResult launch_installed_game(
        std::uint32_t app_id,
        const std::string& install_dir) {
    (void)app_id;
    (void)install_dir;

    // PRIVATE COMPATIBILITY IMPLEMENTATION REMOVED.
    // Public builds intentionally contain no executable handoff,
    // x86 translator, Win32 compatibility layer, or runtime backend.
    return {
        RuntimeLaunchState::Blocked,
        "Compatibility runtime is disabled in the public build."
    };
}

bool public_runtime_launching_enabled() {
    return false;
}
