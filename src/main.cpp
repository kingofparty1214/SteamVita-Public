#include "runtime_bridge.h"

#include <cstdio>

int main() {
    const RuntimeLaunchResult result = launch_installed_game(0, "");
    std::printf("SteamVita Public Launcher\nRuntime status: %s\n", result.detail.c_str());
    return public_runtime_launching_enabled() ? 1 : 0;
}
