; FUN_101389d2 @ 0x101389d2 size=40
  push {r4,r5,r6,lr}
  mov r6,r0
  mov r5,r1
  bl 0x100e4bd8
  mov r4,r0
  cbnz r0,0x101389ee
  mov r0,r6
  bl 0x100e4c18
  cbz r0,0x101389f4
  str r0,[r5,#0x0]
  mov r0,r4
  pop {r4,r5,r6,pc}
  mvn r0,#0x77
  b 0x101389ec
  mvn r0,#0xb
  b 0x101389ec
