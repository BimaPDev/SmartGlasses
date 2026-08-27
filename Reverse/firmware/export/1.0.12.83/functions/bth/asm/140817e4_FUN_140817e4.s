; FUN_140817e4 @ 0x140817e4 size=24
  push {r3,lr}
  bl 0x1407eb80
  cbz r0,0x140817fa
  ldrb.w r0,[r0,#0x27]
  sub.w r0,r0,#0x2
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
