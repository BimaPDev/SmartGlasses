; FUN_100d9204 @ 0x100d9204 size=24
  push {r4,lr}
  ldr r1,[0x100d921c]
  movs r0,#0xc8
  bl 0x100d335c
  ldr r1,[0x100d9220]
  mov r4,r0
  movs r0,#0xc9
  bl 0x100d335c
  orrs r0,r4
  pop {r4,pc}
