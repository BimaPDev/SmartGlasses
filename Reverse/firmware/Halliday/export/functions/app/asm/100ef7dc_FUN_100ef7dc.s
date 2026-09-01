; FUN_100ef7dc @ 0x100ef7dc size=46
  push {r4,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x100ef80c]
  bl 0x1011dbf4
  ldr r3,[0x100ef810]
  ldr r4,[r3,#0x0]
  cbz r4,0x100ef802
  ldrsb.w r0,[r3,#0x9]
  cmp r0,#0x0
  it lt
  ldrsb.lt.w r0,[r3,#0xc]
  uxtb r0,r0
  bl 0x100eebe8
  mov r4,r0
  bl 0x100ef27c
  mov r0,r4
  pop {r4,pc}
