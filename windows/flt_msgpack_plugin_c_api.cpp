#include "include/flt_msgpack/flt_msgpack_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flt_msgpack_plugin.h"

void FltMsgpackPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flt_msgpack::FltMsgpackPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
