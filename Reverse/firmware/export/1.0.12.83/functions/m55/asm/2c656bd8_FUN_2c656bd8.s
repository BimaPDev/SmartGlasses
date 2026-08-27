; FUN_2c656bd8 @ 0x2c656bd8 size=30
  push {r4,lr}
  mov r4,r0
  ldrd r3,r0,[r0,#0x0]
  cbz r3,0x2c656bf4
  adds r2,r0,#0x1
  bne 0x2c656bf4
  mov r0,r3
  bl 0x2c65e8e8
  adds r3,r0,#0x1
  itt eq
  mov.eq r3,#0x0
  str.eq r3,[r4,#0x0]
  pop {r4,pc}
