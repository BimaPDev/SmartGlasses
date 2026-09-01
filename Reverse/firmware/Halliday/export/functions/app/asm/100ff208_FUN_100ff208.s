; FUN_100ff208 @ 0x100ff208 size=38
  push {r4,r5,r6,lr}
  mov r2,r1
  mov r4,r1
  movs r3,#0x0
  ldr.w r6,[r0,#0x204]
  ldr r1,[0x100ff230]
  mov r5,r0
  blx r6
  cbz r0,0x100ff21e
  pop {r4,r5,r6,pc}
  mov r0,r4
  add.w r2,r5,#0x1dc
  ldr r1,[0x100ff234]
  pop.w {r4,r5,r6,lr}
  b.w 0x100fb104
