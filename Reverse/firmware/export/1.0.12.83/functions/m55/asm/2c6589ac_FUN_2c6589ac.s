; FUN_2c6589ac @ 0x2c6589ac size=26
  push {r4,r5,r6,lr}
  mov r5,r0
  mov r6,r1
  ldr r4,[r0,#0x18]
  cbz r4,0x2c6589c4
  mov r1,r5
  mov r0,r6
  ldrd r3,r2,[r4,#0x4]
  blx r3
  ldr r4,[r4,#0x0]
  b 0x2c6589b4
  pop {r4,r5,r6,pc}
