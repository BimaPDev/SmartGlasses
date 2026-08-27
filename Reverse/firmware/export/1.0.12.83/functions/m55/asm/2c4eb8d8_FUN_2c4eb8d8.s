; FUN_2c4eb8d8 @ 0x2c4eb8d8 size=52
  push {r4,r5,r6,lr}
  movs r5,#0x1
  ldr r2,[r0,#0x14]
  mov r4,r0
  strb r5,[r2,#0x0]
  ldrsh.w r1,[r0,#0xc]
  strb r3,[r0,#0x19]
  cmp r1,r3
  bgt 0x2c4eb900
  ldr r3,[0x2c4eb920]
  movs r2,#0x1
  rsb r3,r1,r1, lsl #0x5
  mov r2,r0
  ldr r0,[0x2c4eb924]
  add.w r1,r1,r3, lsl #0x2
  lsls r1,r1,#0x3
  bl 0x2c62bdd8
  mov r1,r5
  str r0,[r4,#0x1c]
  bl 0x2c62be70
  b 0x2c4eb8ec
