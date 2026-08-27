; FUN_1403d1b8 @ 0x1403d1b8 size=32
  push {r3,r4,r5,lr}
  mov r4,r1
  mov r5,r2
  bl 0x1404a1b4
  cbz r0,0x1403d1d4
  mov r2,r5
  mov r1,r4
  pop.w {r3,r4,r5,lr}
  ldr.w r0,[r0,#0xd4]
  b.w 0x1409814c
  movs r0,#0x1
  pop {r3,r4,r5,pc}
