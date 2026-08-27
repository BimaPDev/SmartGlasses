; FUN_140c4170 @ 0x140c4170 size=36
  push {r0,r1,r2,r4,r5,lr}
  ldr r4,[r0,#0x0]
  mov r5,r0
  str r2,[sp,#0x0]
  movs r3,#0x1
  subs r4,r1,r4
  movs r2,#0x0
  mov r1,r4
  bl 0x140c4138
  ldr r0,[r5,#0x0]
  mov.w r3,#0xffffffff
  str.w r3,[r0,#-0x4]
  add r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
