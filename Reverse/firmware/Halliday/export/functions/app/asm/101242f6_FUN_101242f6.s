; FUN_101242f6 @ 0x101242f6 size=32
  cmp r2,#0x0
  push {r4,lr}
  mov r4,r1
  ble 0x10124310
  bl 0x10086b44
  cmp r0,#0x0
  bge 0x1012430e
  movs r3,#0x3f
  mvn r0,#0x15
  strb r3,[r4,#0x0]
  pop {r4,pc}
  mvn r0,#0x5a
  b 0x1012430e
