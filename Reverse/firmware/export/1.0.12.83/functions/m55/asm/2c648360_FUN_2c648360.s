; FUN_2c648360 @ 0x2c648360 size=30
  push {r3,lr}
  mov r3,r0
  mov r2,r1
  ldr r0,[0x2c648380]
  mov r1,r3
  bl 0x2c674238
  ldr r3,[0x2c648384]
  mov.w r1,#0x400
  ldr r0,[r3,#0x0]
  bl 0x2c644100
  movs r0,#0x0
  pop {r3,pc}
