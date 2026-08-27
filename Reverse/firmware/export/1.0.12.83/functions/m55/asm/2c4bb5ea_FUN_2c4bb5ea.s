; FUN_2c4bb5ea @ 0x2c4bb5ea size=54
  push {r4,lr}
  bhi 0x2c4bb618
  ldr r3,[0x2c4bb620]
  add.w r2,r0,r0, lsl #0x1
  ldr.w r2,[r3,r2,lsl #0x2]
  ldr r3,[r2,#0x38]
  lsls r4,r3,#0x19
  bmi 0x2c4bb60a
  lsls r4,r1,#0x19
  bpl 0x2c4bb60a
  ldr r4,[0x2c4bb624]
  ldrb r0,[r4,r0]
  cmp r0,#0xff
  bne 0x2c4bb610
  mov r0,r3
  str r1,[r2,#0x38]
  pop {r4,pc}
  ldr r1,[0x2c4bb628]
  ldr r0,[0x2c4bb62c]
  bl 0x2c673ca8
  mov r1,r0
  ldr r0,[0x2c4bb630]
  bl 0x2c673ca8
