; FUN_140d1c10 @ 0x140d1c10 size=28
  push {r0,r1,r2,r4,r5,lr}
  ldr r4,[r0,#0x0]
  mov r5,r0
  str r2,[sp,#0x0]
  movs r3,#0x1
  subs r4,r1,r4
  movs r2,#0x0
  mov r1,r4
  bl 0x140d1b58
  ldr r0,[r5,#0x0]
  add r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
