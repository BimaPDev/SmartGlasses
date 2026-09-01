; FUN_1011b33a @ 0x1011b33a size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x8]
  ldrh.w r2,[r0,#0x40]
  add.w r1,r0,#0x142
  adds r0,#0x42
  bl 0x1011ea40
  ldr r3,[r4,#0x8]
  ldrh.w r2,[r3,#0x40]
  strh r2,[r3,#0x3c]
  pop {r4,pc}
