; FUN_100f5c34 @ 0x100f5c34 size=28
  push {r3,r4,r5,lr}
  ldr r5,[r0,#0xc]
  mov r4,r0
  mov r0,r5
  bl 0x1006bc30
  mov r0,r5
  bl 0x100e833c
  movs r3,#0x0
  strd r3,r3,[r4,#0x0]
  str r3,[r4,#0xc]
  pop {r3,r4,r5,pc}
