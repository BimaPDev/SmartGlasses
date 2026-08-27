; FUN_2c651e3c @ 0x2c651e3c size=30
  push {r4,lr}
  mov r4,r2
  bhi 0x2c651e4e
  ldrb r2,[r3,#0xc]
  cbz r2,0x2c651e4e
  adds r1,r3,r1
  ldrb r4,[r1,#0xd]
  mov r0,r4
  pop {r4,pc}
  bl 0x2c66eb38
  adds r3,r0,#0x1
  it ne
  uxtb.ne r4,r0
  b 0x2c651e4a
