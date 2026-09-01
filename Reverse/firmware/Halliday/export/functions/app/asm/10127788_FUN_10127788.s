; FUN_10127788 @ 0x10127788 size=32
  push {r4,lr}
  movs r2,#0x1c
  movs r1,#0x0
  mov r4,r0
  bl 0x1011ea48
  movs r3,#0x0
  strh r3,[r4,#0xc]
  movs r3,#0xff
  strb r3,[r4,#0xf]
  mov.w r3,#0x100
  strh r3,[r4,#0x2]
  movs r3,#0x1
  strb r3,[r4,#0x18]
  pop {r4,pc}
