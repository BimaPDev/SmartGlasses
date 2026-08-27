; FUN_140a99c8 @ 0x140a99c8 size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x140a99f0]
  mov.w r1,#0xffffffff
  ldr.w r0,[r5,#0xcc]
  bl 0x140e5148
  mov r0,r4
  bl 0x140b4d70
  mov r4,r0
  ldr.w r0,[r5,#0xcc]
  bl 0x140e52d8
  mov r0,r4
  pop {r3,r4,r5,pc}
