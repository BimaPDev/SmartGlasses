; FUN_2c525822 @ 0x2c525822 size=34
  push {r4,r5,lr}
  sub sp,#0xc
  mov r4,r1
  mov r5,r0
  bl 0x2c5ef9d8
  ldr r3,[0x2c525864]
  ldr r2,[0x2c525868]
  str r3,[sp,#0x0]
  str r0,[sp,#0x4]
  ldr r3,[0x2c52586c]
  strb r0,[r2,#0x0]
  movs r2,#0xde
  ldr r1,[0x2c525870]
  movs r0,#0x3
  bl 0x2c62c82c
