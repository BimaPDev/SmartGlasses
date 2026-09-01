; FUN_1005d1dc @ 0x1005d1dc size=58
  push {r3,r4,r5,lr}
  movs r4,#0x0
  ldr r5,[0x1005793c]
  ldr r3,[r5,#0x0]
  cmp r3,r4
  bgt 0x1005792e
  pop {r3,r4,r5,pc}
  add.w r3,r5,r4, lsl #0x3
  ldr r3,[r3,#0x4]
  cbz r3,0x10057938
  blx r3
  adds r4,#0x1
  b 0x10057926
  movs r2,#0x1
  push {r3,lr}
  ldr r3,[0x1005d1fc]
  movs r0,#0x0
  strb r2,[r3,#0x19]
  bl 0x1005d3e0
  bl 0x10057234
  cbnz r0,0x1005d1f8
  pop.w {r3,lr}
  b.w 0x10057920
  pop {r3,pc}
