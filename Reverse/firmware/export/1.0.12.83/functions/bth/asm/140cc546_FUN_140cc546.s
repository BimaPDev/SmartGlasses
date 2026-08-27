; FUN_140cc546 @ 0x140cc546 size=24
  push {r0,r1,r4,r5,r6,lr}
  ldr r6,[sp,#0x1c]
  mov r4,r0
  ldr r5,[r1,#0x0]
  str r6,[sp,#0x4]
  ldr r6,[sp,#0x18]
  str r6,[sp,#0x0]
  ldr r5,[r5,#0xc]
  blx r5
  mov r0,r4
  add sp,#0x8
  pop {r4,r5,r6,pc}
