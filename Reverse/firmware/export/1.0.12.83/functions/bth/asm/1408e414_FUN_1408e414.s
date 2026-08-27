; FUN_1408e414 @ 0x1408e414 size=26
  push {r4,lr}
  mov r4,r3
  movs r3,#0x0
  sub sp,#0x8
  strd r2,r4,[sp,#0x0]
  mov r2,r3
  bl 0x1408c8cc
  cbz r0,0x1408e42a
  ldr r0,[r0,#0xc]
  add sp,#0x8
  pop {r4,pc}
