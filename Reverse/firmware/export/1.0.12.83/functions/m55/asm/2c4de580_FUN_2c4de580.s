; FUN_2c4de580 @ 0x2c4de580 size=22
  ldr r3,[0x2c4de598]
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  ldr r0,[r0,#0x14]
  cbz r0,0x2c4de592
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  mov r0,r4
  pop {r4,pc}
