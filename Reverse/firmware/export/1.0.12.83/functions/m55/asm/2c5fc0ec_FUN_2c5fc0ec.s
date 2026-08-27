; FUN_2c5fc0ec @ 0x2c5fc0ec size=38
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r1,[0x2c5fc250]
  sub sp,#0x10
  ldr.w r10,[0x2c5fc274]
  mov r5,r0
  ldr.w r8,[0x2c5fc278]
  ldr r3,[0x2c5fc254]
  ldr r2,[0x2c5fc258]
  str r0,[sp,#0x8]
  movs r0,#0x4
  strd r1,r10,[sp,#0x0]
  mov.w r1,#0x478
  bl 0x2c673d88
