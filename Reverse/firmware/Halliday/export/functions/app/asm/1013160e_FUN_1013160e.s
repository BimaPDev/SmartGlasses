; FUN_1013160e @ 0x1013160e size=38
  push {r0,r1,r4,lr}
  mov r4,r2
  bl 0x100bdaec
  cbz r0,0x1013162e
  ldrb r3,[r0,#0x0]
  mov r0,sp
  strb.w r3,[sp,#0x0]
  strh.w r1,[sp,#0x2]
  str r4,[sp,#0x4]
  bl 0x10136b5e
  add sp,#0x8
  pop {r4,pc}
  mvn r0,#0x4
  b 0x1013162a
