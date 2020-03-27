import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:fltmsgpack/flt_msgpack.dart';

void main() {
  const MethodChannel channel = MethodChannel('fltmsgpack');

  setUp(() {
    channel.setMockMethodCallHandler((MethodCall methodCall) async {
      return '42';
    });
  });

  tearDown(() {
    channel.setMockMethodCallHandler(null);
  });

  test('getPlatformVersion', () async {
    expect(await Fltmsgpack.platformVersion, '42');
  });
}
