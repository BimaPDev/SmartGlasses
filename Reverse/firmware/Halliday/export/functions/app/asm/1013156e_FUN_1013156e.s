; FUN_1013156e @ 0x1013156e size=46
  push {r4,lr}
  sub sp,#0x20
  mov r4,r2
  bl 0x100bdaa4
  cbz r1,0x10131596
  cbz r0,0x10131596
  movs r3,#0x3
  strd r1,r4,[sp,#0x4]
  strb.w r3,[sp,#0x0]
  ldrb r3,[r0,#0x0]
  mov r0,sp
  strb.w r3,[sp,#0x1]
  bl 0x10136b82
  add sp,#0x20
  pop {r4,pc}
  mvn r0,#0x4
  b 0x10131592
