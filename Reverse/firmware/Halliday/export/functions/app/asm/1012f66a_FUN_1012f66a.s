; FUN_1012f66a @ 0x1012f66a size=26
  push {r4,lr}
  mov r4,r1
  movs r2,#0x0
  movs r1,#0x6
  mov r0,r4
  bl 0x1012f600
  cbz r0,0x1012f682
  ldrb r3,[r4,#0x2]
  strb r3,[r4,#0x3]
  movs r3,#0x5
  strb r3,[r4,#0x2]
  pop {r4,pc}
