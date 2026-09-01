; FUN_10137dc8 @ 0x10137dc8 size=28
  mov r3,r0
  movs r0,#0x0
  push {r4,lr}
  cmp r2,r0
  bgt 0x10137dd8
  mvn r0,#0x15
  pop {r4,pc}
  ldrh.w r4,[r1,r0,lsl #0x3]
  cmp r4,r3
  beq 0x10137dd6
  adds r0,#0x1
  b 0x10137dce
