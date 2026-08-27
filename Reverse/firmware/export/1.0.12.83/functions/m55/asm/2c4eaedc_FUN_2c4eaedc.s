; FUN_2c4eaedc @ 0x2c4eaedc size=20
  push {r4,lr}
  ldr r4,[0x2c4eaef0]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c4eaeee
  ldr r1,[0x2c4eaef4]
  bl 0x2c60251c
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
