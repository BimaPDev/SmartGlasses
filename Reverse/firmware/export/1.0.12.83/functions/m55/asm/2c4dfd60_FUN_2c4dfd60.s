; FUN_2c4dfd60 @ 0x2c4dfd60 size=50
  orrs.w r1,r2,r3
  push {r4,r5,r6,r7,lr}
  beq 0x2c4dfd8c
  ldr r6,[r0,#0xc]
  movs r1,#0x1
  cmp r6,r1
  ble 0x2c4dfd8c
  ldr r5,[r0,#0x8]
  mov r4,r1
  add.w r12,r5,r1, lsl #0x3
  ldr.w r7,[r5,r1,lsl #0x3]
  ldr.w r5,[r12,#0x4]
  cmp r3,r5
  it eq
  cmp.eq r2,r7
  beq 0x2c4dfd8e
  adds r1,#0x1
  b 0x2c4dfd6c
  movs r4,#0x0
  mov r0,r4
  pop {r4,r5,r6,r7,pc}
