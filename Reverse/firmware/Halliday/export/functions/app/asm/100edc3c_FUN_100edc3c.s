; FUN_100edc3c @ 0x100edc3c size=32
  push {r4,lr}
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[0x100edc5c]
  bl 0x1011dbf4
  mov r1,r4
  ldr r0,[0x100edc60]
  bl 0x10119f9e
  mov r4,r0
  bl 0x100edc14
  mov r0,r4
  pop {r4,pc}
