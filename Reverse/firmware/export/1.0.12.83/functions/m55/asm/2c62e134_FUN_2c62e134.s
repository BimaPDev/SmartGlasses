; FUN_2c62e134 @ 0x2c62e134 size=16
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x2c62e144]
  bl 0x2c62c938
  cbz r0,0x2c62e142
  str r4,[r0,#0x0]
  pop {r4,pc}
