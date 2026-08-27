; FUN_14072670 @ 0x14072670 size=22
  push {r4,r5,r6,lr}
  mov r6,r1
  movs r1,#0x3
  mov r5,r2
  mov r4,r3
  bl 0x14073fdc
  strd r6,r5,[r0,#0x4]
  str r4,[r0,#0x14]
  pop {r4,r5,r6,pc}
