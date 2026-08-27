; FUN_140c4194 @ 0x140c4194 size=34
  push {r3,r4,r5,r6,r7,lr}
  ldr r7,[sp,#0x18]
  mov r6,r3
  mov r4,r0
  mov r5,r1
  mov r3,r7
  bl 0x140c4024
  cbz r7,0x140c41b2
  ldr r0,[r4,#0x0]
  mov r2,r7
  mov r1,r6
  add r0,r5
  bl 0x140c3df2
  mov r0,r4
  pop {r3,r4,r5,r6,r7,pc}
