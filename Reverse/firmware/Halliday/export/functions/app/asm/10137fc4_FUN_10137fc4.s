; FUN_10137fc4 @ 0x10137fc4 size=32
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  mov r6,r2
  bl 0x100e09f8
  cbnz r0,0x10137fe2
  mov r1,r6
  mov r0,r5
  bl 0x100e0874
  cbz r0,0x10137fe2
  ldrh r3,[r0,#0xe]
  orrs r4,r3
  strh r4,[r0,#0xe]
  pop {r4,r5,r6,pc}
