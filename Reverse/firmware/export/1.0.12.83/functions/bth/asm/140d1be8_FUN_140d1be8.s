; FUN_140d1be8 @ 0x140d1be8 size=30
  push {r4,lr}
  ldr r4,[r0,#0x4]
  mov r3,r0
  cmp r4,r1
  bcs 0x140d1bfa
  subs r1,r1,r4
  bl 0x140d1bd4
  pop {r4,pc}
  itttt hi
  ldr.hi r3,[r0,#0x0]
  mov.hi r2,#0x0
  str.hi r1,[r0,#0x4]
  strb.hi r2,[r3,r1]
  b 0x140d1bf8
