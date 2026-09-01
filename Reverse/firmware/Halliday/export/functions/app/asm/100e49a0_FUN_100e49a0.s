; FUN_100e49a0 @ 0x100e49a0 size=40
  push {r4,lr}
  ldr r0,[0x100e49c8]
  bl 0x100e1f7c
  subs r4,r0,#0x0
  bge 0x100e49c4
  ldr r2,[0x100e49cc]
  ldr r3,[0x100e49d0]
  ldr r0,[0x100e49d4]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  mov r2,r4
  ldr r1,[0x100e49d8]
  orrs r0,r3
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
