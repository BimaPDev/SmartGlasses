; FUN_100cb6b4 @ 0x100cb6b4 size=50
  movs r3,#0x0
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x5c]
  str r3,[r0,#0x60]
  str r3,[r0,#0x64]
  add.w r2,r0,#0x64
  ldaex r1,[r2]
  stlex r0,r3,[r2]
  cmp r0,#0x0
  bne 0x100cb6c4
  add.w r0,r4,#0x68
  bl 0x1013c954
  add.w r0,r4,#0x88
  ldr r1,[0x100cb6e8]
  pop.w {r4,lr}
  b.w 0x10114438
