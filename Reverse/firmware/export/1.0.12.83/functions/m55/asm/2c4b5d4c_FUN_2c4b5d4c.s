; FUN_2c4b5d4c @ 0x2c4b5d4c size=40
  push {r3,lr}
  ldr r3,[0x2c4b5d74]
  ldrsb r2,[r3,r0]
  cmp r2,#0x0
  blt 0x2c4b5d68
  ldr r3,[0x2c4b5d78]
  rsb r2,r2,r2, lsl #0x3
  movs r1,#0x1
  movs r0,#0x0
  add.w r2,r3,r2, lsl #0x2
  strb r1,[r2,#0xc]
  pop {r3,pc}
  mov r3,r0
  movs r2,#0x0
  ldr r1,[0x2c4b5d7c]
  ldr r0,[0x2c4b5d80]
  bl 0x2c673ca8
