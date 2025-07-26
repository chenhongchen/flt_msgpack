#ifndef FLUTTER_PLUGIN_FLT_MSGPACK_PLUGIN_H_
#define FLUTTER_PLUGIN_FLT_MSGPACK_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flt_msgpack {

class FltMsgpackPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FltMsgpackPlugin();

  virtual ~FltMsgpackPlugin();

  // Disallow copy and assign.
  FltMsgpackPlugin(const FltMsgpackPlugin&) = delete;
  FltMsgpackPlugin& operator=(const FltMsgpackPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flt_msgpack

#endif  // FLUTTER_PLUGIN_FLT_MSGPACK_PLUGIN_H_
