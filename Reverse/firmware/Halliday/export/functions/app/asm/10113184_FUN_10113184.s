; FUN_10113184 @ 0x10113184 size=40
  ldr r2,[0x101131ac]
  ldr r0,[0x101131b0]
  push {r3,lr}
  cmp r2,r0
  beq 0x10113196
  movs r1,#0x0
  subs r2,r2,r0
  bl 0x1011ea48
  ldr r2,[0x101131b4]
  ldr r0,[0x101131b8]
  cmp r2,r0
  beq 0x101131aa
  pop.w {r3,lr}
  movs r1,#0x0
  subs r2,r2,r0
  b.w 0x1011ea48
  pop {r3,pc}
