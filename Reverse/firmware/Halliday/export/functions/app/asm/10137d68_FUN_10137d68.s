; FUN_10137d68 @ 0x10137d68 size=52
  ldr r3,[r0,#0x68]
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  cbz r3,0x10137d94
  ldr r5,[r3,#0xc]
  cbz r5,0x10137d94
  ldr r3,[r1,#0x8]
  ldr r0,[r0,#0x0]
  ldrh.w r1,[r3,#0x1]
  lsls r2,r1,#0x8
  orr.w r2,r2,r1, lsr #0x8
  subs r2,#0x3
  uxth r2,r2
  ldrb.w r1,[r4,#0x62]
  cbz r2,0x10137d98
  adds r3,#0x3
  str r2,[sp,#0x0]
  movs r2,#0x4
  blx r5
  add sp,#0xc
  pop {r4,r5,pc}
  mov r3,r2
  b 0x10137d8e
