; FUN_2c4bfd84 @ 0x2c4bfd84 size=40
  push {r3,lr}
  ldr r3,[0x2c4bfdac]
  ldrb r2,[r3,#0x0]
  cmp r2,r0
  beq 0x2c4bfd9e
  ldrb r2,[r3,#0x8]
  cmp r2,r0
  beq 0x2c4bfda8
  mov r2,r0
  ldr r1,[0x2c4bfdb0]
  ldr r0,[0x2c4bfdb4]
  bl 0x2c673ca8
  movs r2,#0x0
  add.w r3,r3,r2, lsl #0x3
  ldr r0,[r3,#0x4]
  pop {r3,pc}
  movs r2,#0x1
  b 0x2c4bfda0
