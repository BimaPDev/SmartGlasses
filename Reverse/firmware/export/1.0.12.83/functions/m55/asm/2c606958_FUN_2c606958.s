; FUN_2c606958 @ 0x2c606958 size=30
  push {r4,lr}
  ldr r4,[0x2c6069c8]
  sub sp,#0x8
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c6069c4
  ldr r0,[0x2c6069cc]
  movs r1,#0x72
  ldr r3,[0x2c6069d0]
  ldr r2,[0x2c6069d4]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
  add sp,#0x8
  pop {r4,pc}
