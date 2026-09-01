; FUN_1013c93c @ 0x1013c93c size=24
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1013c950
  ldr r2,[r0,#0x0]
  lsls r3,r2,#0x1e
  beq 0x1013c950
  ldr r4,[r0,#0x4]
  cbz r1,0x1013c950
  bl 0x1013cfd4
  mov r0,r4
  pop {r4,pc}
