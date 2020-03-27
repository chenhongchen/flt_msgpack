import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:flt_msgpack/flt_msgpack.dart';

void main() {
  const MethodChannel channel = MethodChannel('flt_msgpack');

  setUp(() {
    channel.setMockMethodCallHandler((MethodCall methodCall) async {
      return '42';
    });
  });

  tearDown(() {
    channel.setMockMethodCallHandler(null);
  });

  test('getPlatformVersion', () async {
    expect(await FltMsgpack.platformVersion, '42');
  });
}
