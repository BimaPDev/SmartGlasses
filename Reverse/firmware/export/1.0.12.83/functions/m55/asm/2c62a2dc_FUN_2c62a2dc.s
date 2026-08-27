; FUN_2c62a2dc @ 0x2c62a2dc size=26
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r0
  mov r5,r1
  mov r7,r2
  mov r6,r3
  movs r1,#0x1c
  bl 0x2c62c3b0
  strd r5,r7,[r4,#0x0]
  strd r5,r6,[r4,#0x8]
  pop {r3,r4,r5,r6,r7,pc}
