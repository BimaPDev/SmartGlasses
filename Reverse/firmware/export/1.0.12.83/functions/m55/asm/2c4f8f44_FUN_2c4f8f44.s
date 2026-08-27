; FUN_2c4f8f44 @ 0x2c4f8f44 size=46
  push {r4,r5,r6,lr}
  mov r4,r3
  subs r3,#0xa
  sub sp,#0x10
  mov r5,r0
  cmp r3,#0x2
  bhi 0x2c4f8f7e
  ldr r2,[0x2c4f8fe0]
  ldr.w r2,[r2,r3,lsl #0x2]
  ldr r3,[0x2c4f8fe4]
  movs r1,#0x46
  ldr r6,[0x2c4f8fe8]
  movs r0,#0x4
  str r3,[sp,#0x0]
  ldr r3,[0x2c4f8fec]
  strd r6,r2,[sp,#0x4]
  ldr r2,[0x2c4f8ff0]
  bl 0x2c673d88
  ldr r2,[0x2c4f8ff4]
  b 0x2c4f8f58
