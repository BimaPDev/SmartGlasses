; FUN_2c4f6728 @ 0x2c4f6728 size=42
  push {r3,lr}
  movs r0,#0x0
  bl 0x2c4ba9e4
  cbnz r0,0x2c4f6742
  bl 0x2c4ba9ac
  cbnz r0,0x2c4f674a
  ldr r2,[0x2c4f6754]
  ldr r3,[0x2c4f6758]
  strb r0,[r2,#0x0]
  str r0,[r3,#0x0]
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c4f675c]
  bl 0x2c673ca8
  mov r1,r0
  ldr r0,[0x2c4f6760]
  bl 0x2c673ca8
