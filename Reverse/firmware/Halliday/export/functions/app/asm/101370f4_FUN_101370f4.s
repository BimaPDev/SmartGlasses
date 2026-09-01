; FUN_101370f4 @ 0x101370f4 size=24
  push {r3,lr}
  bl 0x100dd8a8
  cbz r0,0x1013710a
  ldrsb.w r3,[r0,#0xc8]
  cmp r3,#0x0
  ite ge
  mov.ge r0,#0x0
  ldrh.w.lt r0,[r0,#0xbe]
  pop {r3,pc}
