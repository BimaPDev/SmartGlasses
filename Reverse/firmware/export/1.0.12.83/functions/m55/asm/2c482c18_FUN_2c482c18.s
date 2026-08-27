; FUN_2c482c18 @ 0x2c482c18 size=34
  push {r3,lr}
  bl 0x2c483ae8
  cmp r0,#0x6
  beq 0x2c482c2a
  movs r0,#0x0
  ldr r3,[0x2c482c3c]
  strb r0,[r3,#0x0]
  pop {r3,pc}
  bl 0x2c46db38
  ldr r3,[r0,#0x14]
  blx r3
  movs r0,#0x0
  ldr r3,[0x2c482c3c]
  strb r0,[r3,#0x0]
  pop {r3,pc}
