; FUN_1011bebc @ 0x1011bebc size=36
  push {r4,r5,r6,lr}
  ldr r6,[r0,#0x10]
  mov r4,r1
  mov r0,r6
  mov r5,r3
  bl 0x1011bea2
  cbz r0,0x1011beda
  movs r1,#0x24
  movs r0,#0x0
  mla r1,r1,r4,r6
  strd r2,r5,[r1,#0xc]
  pop {r4,r5,r6,pc}
  mvn r0,#0x15
  b 0x1011bed8
