; FUN_2c648836 @ 0x2c648836 size=36
  push {r3,lr}
  ldrb r3,[r4,#0x0]
  cbz r3,0x2c648852
  bl 0x2c648304
  movs r1,#0x1
  ldrb r3,[r6,#0x0]
  mov r0,r1
  cbnz r3,0x2c64884c
  movs r1,#0x1
  mov r0,r3
  bl 0x2c6482c4
  strb r5,[r4,#0x0]
  movs r0,#0x64
  bl 0x2c6444fc
  b 0x2c648838
