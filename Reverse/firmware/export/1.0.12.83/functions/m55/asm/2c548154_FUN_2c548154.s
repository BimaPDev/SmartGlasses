; FUN_2c548154 @ 0x2c548154 size=28
  push {r4,lr}
  ldr.w r3,[r0,#0x114]
  mov r4,r0
  strb.w r1,[r0,#0xd4]
  ldr r1,[r3,#0x2c]
  bl 0x2c54800c
  movs r3,#0xff
  movs r0,#0x1
  strb.w r3,[r4,#0xd4]
  pop {r4,pc}
