; FUN_2c6073d4 @ 0x2c6073d4 size=22
  push {r4,lr}
  mov r4,r0
  bl 0x2c607394
  ldrh r3,[r4,#0x1a]
  ldrh r2,[r4,#0x16]
  adds r3,#0x1
  subs r3,r3,r2
  add r0,r3
  sxth r0,r0
  pop {r4,pc}
