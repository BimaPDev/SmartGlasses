; FUN_140e0f2c @ 0x140e0f2c size=66
  add.w r2,r0,#0x14
  asrs r3,r1,#0x5
  ldr r0,[r0,#0x10]
  cmp r0,r3
  push {r4,lr}
  blt 0x140e0f5e
  ble 0x140e0f52
  ands r1,r1,#0x1f
  beq 0x140e0f52
  ldr.w r4,[r2,r3,lsl #0x2]
  lsr.w r0,r4,r1
  lsl.w r1,r0,r1
  cmp r4,r1
  bne 0x140e0f6a
  add.w r3,r2,r3, lsl #0x2
  cmp r3,r2
  bhi 0x140e0f62
  movs r0,#0x0
  pop {r4,pc}
  mov r3,r0
  b 0x140e0f52
  ldr.w r1,[r3,#-0x4]!
  cmp r1,#0x0
  beq 0x140e0f56
  movs r0,#0x1
  b 0x140e0f5c
