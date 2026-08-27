; FUN_2c483340 @ 0x2c483340 size=28
  push {r3,r4,r5,lr}
  ldr r3,[0x2c48335c]
  mov r4,r0
  ldr r3,[r3,#0x0]
  cbz r3,0x2c48334c
  blx r3
  ldr r5,[0x2c483360]
  ldr r3,[r5,#0x0]
  cbz r3,0x2c48335a
  mov r0,r4
  blx r3
  movs r3,#0x0
  str r3,[r5,#0x0]
  pop {r3,r4,r5,pc}
