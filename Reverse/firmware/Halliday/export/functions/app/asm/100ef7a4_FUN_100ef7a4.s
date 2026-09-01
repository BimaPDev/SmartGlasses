; FUN_100ef7a4 @ 0x100ef7a4 size=46
  push {r4,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x100ef7d4]
  bl 0x1011dbf4
  ldr r3,[0x100ef7d8]
  ldr r4,[r3,#0x0]
  cbz r4,0x100ef7ca
  ldrsb.w r0,[r3,#0xa]
  cmp r0,#0x0
  it lt
  ldrsb.lt.w r0,[r3,#0xd]
  uxtb r0,r0
  bl 0x100eebe8
  mov r4,r0
  bl 0x100ef27c
  mov r0,r4
  pop {r4,pc}
