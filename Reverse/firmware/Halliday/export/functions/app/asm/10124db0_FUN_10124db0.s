; FUN_10124db0 @ 0x10124db0 size=34
  push {r4,r5,r6,lr}
  ldr r5,[r0,#0x0]
  mov r4,r0
  ldr r3,[r5,#0x0]
  cbz r3,0x10124dc0
  str r3,[r0,#0x0]
  bl 0x10124db0
  ldr r3,[r5,#0x4]
  str r5,[r4,#0x0]
  cbz r3,0x10124dd0
  mov r1,r4
  mov r0,r5
  pop.w {r4,r5,r6,lr}
  bx r3
  pop {r4,r5,r6,pc}
