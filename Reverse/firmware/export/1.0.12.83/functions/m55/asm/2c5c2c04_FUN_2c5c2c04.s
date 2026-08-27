; FUN_2c5c2c04 @ 0x2c5c2c04 size=40
  push {r4,lr}
  ldr r4,[r0,#0xc]
  ldrd r1,r3,[r4,#0x38]
  cmp r1,r3
  blt 0x2c5c2c1e
  ldr r0,[r4,#0x40]
  cbz r0,0x2c5c2c1c
  bl 0x2c62be1c
  movs r3,#0x0
  str r3,[r4,#0x40]
  pop {r4,pc}
  adds r1,#0x1
  mov r0,r4
  str r1,[r4,#0x38]
  pop.w {r4,lr}
  b.w 0x2c5c2b70
