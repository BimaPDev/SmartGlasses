; FUN_140a9a20 @ 0x140a9a20 size=42
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  ldr r6,[0x140a9a4c]
  mov.w r1,#0xffffffff
  ldr.w r0,[r6,#0xcc]
  bl 0x140e5148
  mov r1,r5
  mov r0,r4
  bl 0x140b4ef4
  mov r4,r0
  ldr.w r0,[r6,#0xcc]
  bl 0x140e52d8
  mov r0,r4
  pop {r4,r5,r6,pc}
