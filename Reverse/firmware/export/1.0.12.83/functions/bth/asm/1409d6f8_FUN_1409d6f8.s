; FUN_1409d6f8 @ 0x1409d6f8 size=36
  push {r4,r5,lr}
  mov r4,r0
  ldr r5,[0x1409d71c]
  ldr r2,[0x1409d720]
  sub sp,#0x14
  strd r2,r5,[sp,#0x0]
  movs r1,#0x25
  ldr r3,[0x1409d724]
  ldr r2,[0x1409d728]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  ldr r3,[0x1409d72c]
  strb r4,[r3,#0x0]
  add sp,#0x14
  pop {r4,r5,pc}
