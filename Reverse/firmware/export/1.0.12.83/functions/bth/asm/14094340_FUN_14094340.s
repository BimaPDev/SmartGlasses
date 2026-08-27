; FUN_14094340 @ 0x14094340 size=32
  push {r4,lr}
  ldr.w r4,[r0,#0x350]
  sub sp,#0x8
  bl 0x140755e4
  add.w r0,r4,#0x35
  bl 0x14085cd4
  str r0,[sp,#0x4]
  bl 0x1407561c
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
