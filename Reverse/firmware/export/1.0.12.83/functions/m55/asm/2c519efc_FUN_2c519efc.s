; FUN_2c519efc @ 0x2c519efc size=40
  push {r4,lr}
  mov r4,r0
  bl 0x2c5edef8
  cbz r0,0x2c519f1a
  ldr r0,[r4,#0x38]
  bl 0x2c62be4c
  ldr r0,[r4,#0x38]
  bl 0x2c62be74
  ldr r3,[0x2c519f24]
  movs r2,#0x1
  strb r2,[r3,#0x0]
  pop {r4,pc}
  ldr r0,[r4,#0x38]
  pop.w {r4,lr}
  b.w 0x2c519e84
