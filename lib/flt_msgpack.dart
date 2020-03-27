import 'dart:async';

import 'package:flutter/services.dart';

class FltMsgpack {
  static const MethodChannel _channel =
      const MethodChannel('flt_msgpack');

  static Future<String> get platformVersion async {
    final String version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
