; FUN_140ad978 @ 0x140ad978 size=36
  push {r4,r5,lr}
  mov r4,r0
  ldr r5,[0x140ad99c]
  ldr r2,[0x140ad9a0]
  ldrb r0,[r5,#0x0]
  sub sp,#0x14
  strd r2,r0,[sp,#0x0]
  movs r1,#0xa
  ldr r3,[0x140ad9a4]
  ldr r2,[0x140ad9a8]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  strb r4,[r5,#0x0]
  add sp,#0x14
  pop {r4,r5,pc}
