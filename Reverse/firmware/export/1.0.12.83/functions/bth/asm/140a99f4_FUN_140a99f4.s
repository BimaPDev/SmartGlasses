; FUN_140a99f4 @ 0x140a99f4 size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x140a9a1c]
  mov.w r1,#0xffffffff
  ldr.w r0,[r5,#0xcc]
  bl 0x140e5148
  mov r0,r4
  bl 0x140b5038
  mov r4,r0
  ldr.w r0,[r5,#0xcc]
  bl 0x140e52d8
  mov r0,r4
  pop {r3,r4,r5,pc}
