; FUN_10136e8e @ 0x10136e8e size=38
  push {r3,r4,r5,lr}
  mov r5,r2
  movs r2,#0x0
  mov r4,r1
  mov r1,r0
  mov r0,r2
  bl 0x100dce84
  cbz r0,0x10136eae
  mov r1,r4
  uxth r2,r5
  ldrb r0,[r0,#0x0]
  pop.w {r3,r4,r5,lr}
  b.w 0x10132068
  mvn r0,#0x4
  pop {r3,r4,r5,pc}
