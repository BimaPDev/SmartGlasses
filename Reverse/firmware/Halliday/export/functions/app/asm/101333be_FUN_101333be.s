; FUN_101333be @ 0x101333be size=48
  push {r3,r4,r5,lr}
  movs r1,#0x1
  mov r5,r0
  movw r0,#0xfc30
  bl 0x100c5d4c
  mov r4,r0
  cbz r0,0x101333e8
  movs r1,#0x1
  adds r0,#0x8
  bl 0x100c1fe4
  strb r5,[r0,#0x0]
  mov r1,r4
  pop.w {r3,r4,r5,lr}
  movw r0,#0xfc30
  b.w 0x100c756c
  mvn r0,#0x68
  pop {r3,r4,r5,pc}
