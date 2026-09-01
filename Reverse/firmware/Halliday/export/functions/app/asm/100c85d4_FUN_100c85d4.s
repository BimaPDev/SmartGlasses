; FUN_100c85d4 @ 0x100c85d4 size=30
  movs r2,#0x0
  push {r3,lr}
  strb r2,[r0,#0x0]
  mov r3,r0
  ldr r0,[0x100c85f4]
  bl 0x10132e28
  lsls r2,r0,#0x19
  it mi
  mov.mi r2,#0x1
  mov.w r0,#0x0
  it mi
  strb.mi r2,[r3,#0x0]
  pop {r3,pc}
