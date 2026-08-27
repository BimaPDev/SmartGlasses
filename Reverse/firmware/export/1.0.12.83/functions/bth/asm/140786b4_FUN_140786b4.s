; FUN_140786b4 @ 0x140786b4 size=42
  push {r3,r4,r5,lr}
  ldr r5,[0x140786e0]
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x4]
  bl 0x140e5148
  ldr.w r0,[r5,#0x25c]
  uxth r3,r0
  cmp r3,#0x4f
  itet ls
  mov.ls r0,r3
  mov.hi r4,#0x0
  rsb.ls.w r4,r0,#0x50
  ldr r0,[r5,#0x4]
  bl 0x140e52d8
  mov r0,r4
  pop {r3,r4,r5,pc}
