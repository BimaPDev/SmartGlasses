; FUN_2c4bfe00 @ 0x2c4bfe00 size=20
  push {r3,lr}
  bl 0x2c49ad00
  cmp r0,#0xf
  bhi 0x2c4bfe10
  ldr r3,[0x2c4bfe14]
  ldrb r0,[r3,r0]
  pop {r3,pc}
  movs r0,#0x10
  pop {r3,pc}
