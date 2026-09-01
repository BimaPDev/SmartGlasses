; FUN_10137e30 @ 0x10137e30 size=30
  push {r4,lr}
  ldrb.w r3,[r0,#0x5d]
  mov r4,r0
  cbz r3,0x10137e46
  adds r0,#0x70
  bl 0x1013cb84
  movs r3,#0x0
  strb.w r3,[r4,#0x5d]
  movs r3,#0x0
  strb.w r3,[r4,#0x62]
  pop {r4,pc}
