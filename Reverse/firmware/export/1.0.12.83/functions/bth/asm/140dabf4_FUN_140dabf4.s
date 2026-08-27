; FUN_140dabf4 @ 0x140dabf4 size=44
  push {r4,r5,r6,lr}
  movs r2,#0x68
  subs r5,r1,#0x1
  mov r6,r1
  muls r5,r2
  add.w r1,r5,#0x74
  bl 0x140db8a8
  mov r4,r0
  cbz r0,0x140dac1c
  movs r1,#0x0
  add.w r2,r5,#0x68
  strd r1,r6,[r0,#0x0]
  adds r0,#0xc
  str r0,[r4,#0x8]
  bl 0x140e5658
  mov r0,r4
  pop {r4,r5,r6,pc}
