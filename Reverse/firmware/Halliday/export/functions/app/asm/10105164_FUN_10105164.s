; FUN_10105164 @ 0x10105164 size=20
  push {r3,lr}
  ldrd r3,r2,[r0,#0x0]
  mov r0,r1
  lsls r2,r2,#0x2
  lsls r1,r3,#0x2
  bl 0x10104afc
  movs r0,#0x0
  pop {r3,pc}
