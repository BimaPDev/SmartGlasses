; FUN_100e49dc @ 0x100e49dc size=40
  push {r4,lr}
  ldr r0,[0x100e4a04]
  bl 0x100e1fe8
  subs r4,r0,#0x0
  bge 0x100e4a00
  ldr r2,[0x100e4a08]
  ldr r3,[0x100e4a0c]
  ldr r0,[0x100e4a10]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  mov r2,r4
  ldr r1,[0x100e4a14]
  orrs r0,r3
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
