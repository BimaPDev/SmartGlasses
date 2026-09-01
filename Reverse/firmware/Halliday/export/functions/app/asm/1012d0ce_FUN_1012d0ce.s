; FUN_1012d0ce @ 0x1012d0ce size=22
  push {r3,lr}
  bl 0x10115464
  bl 0x1009eaf4
  cbz r0,0x1012d0de
  ldr r0,[r0,#0xc]
  pop {r3,pc}
  mov.w r0,#0xffffffff
  b 0x1012d0dc
