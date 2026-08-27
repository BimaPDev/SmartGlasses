; TRACE_weather_1x2 @ 0x2c4a714c size=40
  push {r4,r5,r6,r7,lr}
  ldr r2,[0x2c4a72ac]
  sub sp,#0x24
  movw r1,#0x774
  ldr r6,[0x2c4a72b0]
  str r2,[sp,#0x0]
  mov r5,r0
  ldr r2,[0x2c4a72b4]
  movs r0,#0x4
  ldr r3,[0x2c4a72b8]
  strd r6,r1,[sp,#0x4]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x1c]
  mov.w r2,#0x0
  ldr r2,[0x2c4a72bc]
  bl 0x2c673d88
