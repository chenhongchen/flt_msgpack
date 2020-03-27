import 'dart:async';

import 'package:flutter/services.dart';

class Fltmsgpack {
  static const MethodChannel _channel =
      const MethodChannel('fltmsgpack');

  static Future<String> get platformVersion async {
    final String version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
