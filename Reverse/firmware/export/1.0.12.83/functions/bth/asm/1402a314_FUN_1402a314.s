; FUN_1402a314 @ 0x1402a314 size=28
  movs r2,#0x1
  push {r3,r4,r5,lr}
  ldr r3,[0x1402a330]
  ldr r4,[0x1402a334]
  strb r2,[r3,#0x0]
  add.w r5,r4,#0x10
  ldr.w r3,[r4],#0x4
  cbz r3,0x1402a32a
  blx r3
  cmp r4,r5
  bne 0x1402a322
  pop {r3,r4,r5,pc}
