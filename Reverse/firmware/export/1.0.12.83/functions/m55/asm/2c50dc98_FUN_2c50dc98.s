; FUN_2c50dc98 @ 0x2c50dc98 size=46
  push {r3,r4,r5,lr}
  mov r5,r0
  ldr r3,[0x2c50dcc8]
  mov r4,r0
  str.w r3,[r5],#0x30
  mov r0,r5
  bl 0x2c50ed7c
  movs r3,#0x0
  mov r0,r5
  str r3,[r4,#0x20]
  strd r3,r3,[r4,#0x10]
  strd r3,r3,[r4,#0x18]
  bl 0x2c50ec40
  mov r0,r4
  bl 0x2c5068ac
  mov r0,r4
  pop {r3,r4,r5,pc}
