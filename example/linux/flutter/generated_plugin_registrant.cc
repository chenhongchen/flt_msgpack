//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <flt_msgpack/flt_msgpack_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) flt_msgpack_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FltMsgpackPlugin");
  flt_msgpack_plugin_register_with_registrar(flt_msgpack_registrar);
}
