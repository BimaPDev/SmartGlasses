; FUN_140564f8 @ 0x140564f8 size=44
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r2
  lsls r2,r4,#0x8
  movs r3,#0x4
  mov.w r0,#0xe00
  uxth r1,r1
  orr r2,r2,#0x3
  bl 0x14074378
  cbz r0,0x14056522
  movs r2,#0x1
  strb r4,[r0,#0x0]
  strh r5,[r0,#0x2]
  strb r2,[r0,#0x1]
  pop.w {r3,r4,r5,lr}
  b.w 0x140743d0
  pop {r3,r4,r5,pc}
