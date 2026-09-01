; FUN_1011d578 @ 0x1011d578 size=44
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1011d5a2
  movs r2,#0x10
  movs r1,#0x0
  bl 0x1011c5b4
  movs r2,#0x10
  add.w r0,r4,#0x30
  movs r1,#0x0
  bl 0x1011c5b4
  movs r3,#0x0
  movs r2,#0x0
  str r3,[r4,#0x44]
  mov.w r3,#0x10000
  movs r0,#0x1
  strd r2,r3,[r4,#0x50]
  pop {r4,pc}
