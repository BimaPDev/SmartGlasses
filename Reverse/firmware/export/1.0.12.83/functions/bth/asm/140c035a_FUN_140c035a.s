; FUN_140c035a @ 0x140c035a size=30
  ldr r3,[r0,#0x0]
  subs r2,r3,#0x1
  cmp r3,#0x1
  push {r4,lr}
  mov r4,r0
  str r2,[r0,#0x0]
  bne 0x140c0376
  bl 0x140c02e8
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x140d7e48
  pop {r4,pc}
