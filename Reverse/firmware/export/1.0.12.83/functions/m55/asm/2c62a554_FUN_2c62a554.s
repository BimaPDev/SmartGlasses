; FUN_2c62a554 @ 0x2c62a554 size=24
  movs r1,#0x20
  push {r4,lr}
  mov r4,r0
  bl 0x2c62c3b0
  movs r1,#0x0
  ldr r2,[0x2c62a56c]
  ldr r3,[0x2c62a570]
  strb r1,[r4,#0x0]
  strd r2,r3,[r4,#0x18]
  pop {r4,pc}
