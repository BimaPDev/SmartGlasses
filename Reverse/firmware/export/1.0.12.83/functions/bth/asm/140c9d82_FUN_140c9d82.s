; FUN_140c9d82 @ 0x140c9d82 size=36
  push {r3,r4,r5,lr}
  mov r5,r1
  bl 0x140c9d64
  mov r4,r0
  mov r0,r5
  bl 0x140c9d64
  adds r3,r0,#0x1
  adds r2,r4,#0x1
  rsbs r0,r3
  adcs r0,r3
  rsbs r4,r2
  adcs r4,r2
  subs r1,r0,r4
  rsbs r0,r1
  adcs r0,r1
  pop {r3,r4,r5,pc}
