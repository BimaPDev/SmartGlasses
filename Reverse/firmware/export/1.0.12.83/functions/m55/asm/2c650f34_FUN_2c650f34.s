; FUN_2c650f34 @ 0x2c650f34 size=42
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c650f60]
  cmp r3,r2
  push {r4,lr}
  mov r4,r0
  beq 0x2c650f5c
  ldr.w r3,[r3,#-0x4]
  cmp r3,#0x0
  ble 0x2c650f52
  movs r3,#0x0
  mov r2,r3
  mov r1,r3
  bl 0x2c650ea0
  ldr r3,[r4,#0x0]
  mov.w r2,#0xffffffff
  str.w r2,[r3,#-0x4]
  pop {r4,pc}
