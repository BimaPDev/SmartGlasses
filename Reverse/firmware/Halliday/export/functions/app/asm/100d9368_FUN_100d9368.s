; FUN_100d9368 @ 0x100d9368 size=24
  push {r4,lr}
  ldr r1,[0x100d9380]
  movs r0,#0xcc
  bl 0x100d335c
  ldr r1,[0x100d9384]
  mov r4,r0
  movs r0,#0xce
  bl 0x100d335c
  orrs r0,r4
  pop {r4,pc}
