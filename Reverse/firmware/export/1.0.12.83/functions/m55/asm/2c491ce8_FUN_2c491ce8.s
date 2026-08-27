; FUN_2c491ce8 @ 0x2c491ce8 size=36
  push {r3,lr}
  ldr r3,[0x2c491d0c]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x3
  beq 0x2c491cf6
  movs r0,#0x0
  pop {r3,pc}
  ldr r3,[0x2c491d10]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x0
  beq 0x2c491cf2
  mov r2,r1
  mov r1,r0
  movs r0,#0x0
  bl 0x2c491c00
  movs r0,#0x0
  pop {r3,pc}
