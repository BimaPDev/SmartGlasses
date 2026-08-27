; FUN_140deba0 @ 0x140deba0 size=30
  push {r3,r4,r5,lr}
  movs r3,#0x0
  mov r5,r2
  movs r2,#0xff
  mov r4,r0
  str.w r3,[r0,#0x3fc]
  bl 0x140e05b0
  adds r3,r0,#0x1
  it eq
  mov.eq r0,#0x0
  str r0,[r5,#0x0]
  mov r0,r4
  pop {r3,r4,r5,pc}
