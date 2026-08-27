; FUN_140c4c20 @ 0x140c4c20 size=36
  ldr r3,[0x140c4c44]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  ldrb r3,[r4,#0xc]
  cbz r3,0x140c4c3a
  ldr r0,[r4,#0x18]
  cbz r0,0x140c4c3a
  bl 0x140d7e4c
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
