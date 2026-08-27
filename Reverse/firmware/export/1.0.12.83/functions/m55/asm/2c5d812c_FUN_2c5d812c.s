; FUN_2c5d812c @ 0x2c5d812c size=42
  push {r4,lr}
  ldr r4,[r3,#0x50]
  cbz r4,0x2c5d8154
  ldrd r2,r0,[r3,#0x48]
  add.w r1,r0,#0x9
  cmp r1,r2
  ite lt
  add.lt r0,#0xa
  mov.ge r0,#0x0
  str r0,[r3,#0x4c]
  bl 0x2c5cfe2c
  mov r1,r0
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c63140c
  pop {r4,pc}
