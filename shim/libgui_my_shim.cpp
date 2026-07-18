#include <gui/SurfaceComposerClient.h>

extern "C" void* 
_ZN7android21SurfaceComposerClient20createVirtualDisplayERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbbS9_jf(
    const std::string& displayName, bool isSecure,
    bool optimizeForPower, const std::string& uniqueId,
    uid_t ownerUid, float requestedRefreshRate);

extern "C" void* 
_ZN7android21SurfaceComposerClient20createVirtualDisplayERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbbS9_f(
    const std::string& displayName, bool isSecure,
    bool optimizeForPower, const std::string& uniqueId,
    float requestedRefreshRate) {
      return _ZN7android21SurfaceComposerClient20createVirtualDisplayERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbbS9_jf(
        displayName, isSecure, optimizeForPower, uniqueId, android::gui::Uid::INVALID.val(), requestedRefreshRate);
}
