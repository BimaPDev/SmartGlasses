; FUN_101149a0 @ 0x101149a0 size=34
  push {r4,lr}
  ldr r4,[0x101149c4]
  ldr r3,[r4,#0x0]
  cbz r3,0x101149c0
  bl 0x10061900
  ldr r2,[r4,#0x0]
  ldr r1,[0x101149c8]
  add r0,r2
  str r0,[r1,#0x10]
  pop.w {r4,lr}
  movs r1,#0x0
  mov r0,r2
  b.w 0x1013ce18
  pop {r4,pc}
