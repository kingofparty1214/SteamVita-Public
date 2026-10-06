# SteamVita Public

This is the public launcher/installer repository for SteamVita.

The compatibility/runtime implementation is intentionally not included here yet. Internal compatibility builds are still experimental and have caused hard crashes, full system hangs, and other unresolved issues on real PlayStation Vita hardware.

## Public scope

This repository contains only the public-facing launcher/installer side of the project and safe compatibility stubs.

Game launching is intentionally blocked in public builds. The private compatibility layer, x86/ARM translation work, Win32 shims, and experimental execution backends are not included.

## Updates

Public builds, release assets, and update manifests are published from this repository only.

The public updater must never point to the private development repository.
