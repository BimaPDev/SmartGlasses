; FUN_14067434 @ 0x14067434 size=36
  push {r4,r5,lr}
  sub sp,#0x14
  mov r4,r0
  str r1,[sp,#0xc]
  ldrh r1,[r0,#0x6]
  ldrb r0,[r0,#0x4]
  bl 0x140667cc
  mov r5,r0
  ldrb r3,[r4,#0x4]
  ldrh r1,[r4,#0x2]
  ldrh r0,[r4,#0x0]
  ldr r2,[sp,#0xc]
  str r5,[sp,#0x0]
  bl 0x1406806c
  add sp,#0x14
  pop {r4,r5,pc}
