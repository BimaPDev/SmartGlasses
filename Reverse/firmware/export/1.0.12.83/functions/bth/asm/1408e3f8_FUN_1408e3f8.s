; FUN_1408e3f8 @ 0x1408e3f8 size=26
  push {r4,lr}
  mov r4,r3
  sub sp,#0x8
  ldr r3,[sp,#0x10]
  str r4,[sp,#0x0]
  str r3,[sp,#0x4]
  movs r3,#0x0
  bl 0x1408c8cc
  cbz r0,0x1408e40e
  ldr r0,[r0,#0xc]
  add sp,#0x8
  pop {r4,pc}
