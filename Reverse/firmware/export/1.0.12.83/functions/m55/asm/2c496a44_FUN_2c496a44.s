; FUN_2c496a44 @ 0x2c496a44 size=22
  push {r4,lr}
  movs r1,#0x0
  mov r4,r0
  bl 0x2c674278
  movs r0,#0x0
  ldr r2,[0x2c496a5c]
  ldr r3,[0x2c496a60]
  strb r0,[r2,r4]
  strb r0,[r3,r4]
  pop {r4,pc}
