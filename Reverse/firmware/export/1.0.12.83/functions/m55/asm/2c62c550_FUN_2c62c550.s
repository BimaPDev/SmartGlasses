; FUN_2c62c550 @ 0x2c62c550 size=112
  push {r4,r5,r6,lr}
  ldr r3,[r0,#0x4]
  mov r6,r1
  mov r4,r0
  mov r5,r2
  adds r3,#0x1
  add.w r1,r3,r3, lsl #0x3
  str r3,[r0,#0x4]
  ldr r0,[r0,#0x0]
  lsls r1,r1,#0x3
  bl 0x2c62bebc
  ldr r3,[r4,#0x4]
  str r0,[r4,#0x0]
  movs r2,#0x44
  add.w r3,r3,r3, lsl #0x3
  mov r1,r5
  add.w r0,r0,r3, lsl #0x3
  subs r0,#0x48
  bl 0x2c674668
  ldrd r2,r3,[r4,#0x0]
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r2,r3, lsl #0x3
  str.w r6,[r3,#-0x4]
  ldr r3,[r5,#0x0]
  cbz r3,0x2c62c596
  pop {r4,r5,r6,pc}
  ldr r3,[r5,#0x4]
  cmp r3,#0x0
  bne 0x2c62c594
  ldr r1,[0x2c62c5c0]
  ldrd r2,r3,[r4,#0x0]
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r2,r3, lsl #0x3
  str.w r4,[r3,#-0x48]
  ldrd r2,r3,[r4,#0x0]
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r2,r3, lsl #0x3
  str.w r1,[r3,#-0x44]
  pop {r4,r5,r6,pc}
