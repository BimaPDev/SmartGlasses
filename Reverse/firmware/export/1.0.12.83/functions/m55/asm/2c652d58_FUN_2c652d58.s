; FUN_2c652d58 @ 0x2c652d58 size=30
  push {r4,lr}
  mov r4,r0
  ldrd r3,r0,[r0,#0x0]
  cbz r3,0x2c652d74
  adds r2,r0,#0x1
  bne 0x2c652d74
  mov r0,r3
  bl 0x2c65e8ca
  adds r3,r0,#0x1
  itt eq
  mov.eq r3,#0x0
  str.eq r3,[r4,#0x0]
  pop {r4,pc}
