; FUN_140602e8 @ 0x140602e8 size=26
  movs r2,#0x0
  push {r3,lr}
  mov r1,r2
  ldr r0,[0x14060304]
  bl 0x140e52f8
  movs r2,#0x0
  ldr r3,[0x14060308]
  str.w r0,[r3,#0x98]
  strb.w r2,[r3,#0xac]
  pop {r3,pc}
