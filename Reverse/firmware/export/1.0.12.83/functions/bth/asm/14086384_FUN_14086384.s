; FUN_14086384 @ 0x14086384 size=24
  push {r3,lr}
  bl 0x14085c48
  cbz r0,0x1408639a
  ldrb.w r0,[r0,#0x4b]
  subs r0,#0x3
  cmp r0,#0x1
  ite hi
  mov.hi r0,#0x0
  mov.ls r0,#0x1
  pop {r3,pc}
