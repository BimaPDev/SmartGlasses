; FUN_2c58c370 @ 0x2c58c370 size=28
  push {r4,lr}
  ldr r3,[0x2c58c38c]
  mov r4,r0
  ldrsb.w r1,[r0,#0x8]
  str r3,[r0,#0x0]
  adds r3,r1,#0x1
  beq 0x2c58c388
  ldr r0,[r0,#0x4]
  cbz r0,0x2c58c388
  bl 0x2c5fd428
  mov r0,r4
  pop {r4,pc}
