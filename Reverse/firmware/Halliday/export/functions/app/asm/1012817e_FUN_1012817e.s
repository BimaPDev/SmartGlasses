; FUN_1012817e @ 0x1012817e size=32
  push {r0,r1,r4,r5,r6,lr}
  ldr r5,[r0,#0x0]
  ldr r4,[r5,#0x8]
  cbz r4,0x1012819a
  ldr r6,[sp,#0x18]
  strd r3,r6,[sp,#0x0]
  mov r3,r2
  mov r2,r1
  mov r1,r0
  mov r0,r5
  blx r4
  add sp,#0x8
  pop {r4,r5,r6,pc}
  mov r0,r4
  b 0x10128196
