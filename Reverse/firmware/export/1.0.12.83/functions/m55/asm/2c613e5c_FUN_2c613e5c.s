; FUN_2c613e5c @ 0x2c613e5c size=46
  movs r3,#0x0
  ldr r2,[0x2c613e8c]
  push {r4,lr}
  ldr.w r4,[r2,r3,lsl #0x3]
  uxtb.w r12,r3
  add.w lr,r2,r3, lsl #0x3
  cbz r4,0x2c613e7c
  adds r3,#0x1
  cmp r3,#0x10
  bne 0x2c613e62
  mov.w r0,#0xffffffff
  pop {r4,pc}
  str.w r0,[r2,r3,lsl #0x3]
  sxth.w r0,r12
  str.w r1,[lr,#0x4]
  pop {r4,pc}
