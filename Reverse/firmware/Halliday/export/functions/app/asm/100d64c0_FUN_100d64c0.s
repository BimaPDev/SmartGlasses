; FUN_100d64c0 @ 0x100d64c0 size=42
  push {r3,r4,r5,lr}
  mov r5,r0
  ldr r3,[0x100d64ec]
  ldr r4,[0x100d64f0]
  ldr r1,[0x100d64f4]
  subs r4,r4,r3
  lsls r4,r4,#0x5
  mov r3,r0
  ldr r0,[0x100d64f8]
  and r4,r4,#0xff00
  orrs r0,r4
  ldr r2,[0x100d64fc]
  bl 0x100a5b78
  mov r1,r5
  pop.w {r3,r4,r5,lr}
  ldr r0,[0x100d6500]
  b.w 0x100d47a4
