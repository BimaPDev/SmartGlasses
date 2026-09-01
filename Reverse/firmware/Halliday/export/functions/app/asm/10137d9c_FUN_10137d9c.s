; FUN_10137d9c @ 0x10137d9c size=44
  ldr r3,[r0,#0x68]
  push {r0,r1,r4,lr}
  cbz r3,0x10137dc4
  ldr r4,[r3,#0xc]
  cbz r4,0x10137dc4
  ldr r3,[r1,#0x8]
  ldrh.w r1,[r3,#0x1]
  adds r3,#0x3
  lsls r2,r1,#0x8
  orr.w r2,r2,r1, lsr #0x8
  subs r2,#0x3
  uxth r2,r2
  str r2,[sp,#0x0]
  ldrb.w r1,[r0,#0x62]
  movs r2,#0x1
  ldr r0,[r0,#0x0]
  blx r4
  add sp,#0x8
  pop {r4,pc}
