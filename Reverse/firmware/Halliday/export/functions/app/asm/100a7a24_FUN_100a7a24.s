; FUN_100a7a24 @ 0x100a7a24 size=22
  push {r3,lr}
  ldr r3,[0x100a7a3c]
  ldr r0,[r3,#0x0]
  cbz r0,0x100a7a34
  bl 0x10113e2c
  movs r0,#0x0
  pop {r3,pc}
  mvn r0,#0x2
  b 0x100a7a32
