; FUN_101370d8 @ 0x101370d8 size=28
  push {r3,lr}
  bl 0x100dd8a8
  cbz r0,0x101370f2
  ldrsb.w r3,[r0,#0x60]
  cmp r3,#0x0
  itee ge
  mov.ge r0,#0x0
  ldrb.lt.w r0,[r0,#0x60]
  ubfx.lt r0,r0,#0x3,#0x3
  pop {r3,pc}
