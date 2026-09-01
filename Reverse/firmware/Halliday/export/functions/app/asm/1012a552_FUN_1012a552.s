; FUN_1012a552 @ 0x1012a552 size=40
  push {r3,lr}
  bl 0x10086f90
  ldr r3,[0x10092290]
  movs r1,#0x10
  strb r0,[r3,#0x0]
  pop.w {r3,lr}
  ldr r0,[0x10092294]
  b.w 0x1012b008
  push {r3,lr}
  bl 0x10091920
  bl 0x100921c4
  pop.w {r3,lr}
  b.w 0x10092278
