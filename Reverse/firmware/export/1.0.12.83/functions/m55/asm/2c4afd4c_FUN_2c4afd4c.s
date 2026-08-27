; FUN_2c4afd4c @ 0x2c4afd4c size=46
  push {r3,lr}
  cbz r0,0x2c4afd72
  cbz r1,0x2c4afd72
  ldr r3,[0x2c4afd7c]
  ldr.w r2,[r3,#0x6bc]
  add.w r2,r2,#0x1aa
  ldr.w r2,[r3,r2,lsl #0x2]
  str r2,[r0,#0x0]
  ldr.w r2,[r3,#0x6bc]
  add.w r3,r3,r2, lsl #0x2
  ldr.w r3,[r3,#0x6b4]
  str r3,[r1,#0x0]
  pop {r3,pc}
  ldr r1,[0x2c4afd80]
  ldr r0,[0x2c4afd84]
  bl 0x2c673ca8
