; FUN_1010cb38 @ 0x1010cb38 size=96
  push {r4,lr}
  ldr r4,[0x1010cb98]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r0,[r3,#0x6dc]
  cbz r0,0x1010cb96
  ldr r3,[0x1010cb9c]
  ldr r3,[r3,#0x0]
  cbnz r3,0x1010cb8a
  movs r2,#0x1
  mov.w r1,#0xa00
  ldr r0,[0x1010cb98]
  bl 0x1013b1e8
  cbnz r0,0x1010cb96
  bl 0x1010c204
  cbnz r0,0x1010cb96
  ldr r0,[0x1010cb98]
  bl 0x1010b660
  cbnz r0,0x1010cb96
  movs r3,#0x1
  str r3,[r4,#0x20]
  ldr.w r3,[r4,#0x6e4]
  adds r3,#0x1
  and r3,r3,#0x1
  str.w r3,[r4,#0x6e4]
  add.w r3,r3,#0x1b6
  add.w r3,r4,r3, lsl #0x2
  str r0,[r3,#0x4]
  b 0x1010cb96
  movs r1,#0x0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1010cb50
  pop {r4,pc}
