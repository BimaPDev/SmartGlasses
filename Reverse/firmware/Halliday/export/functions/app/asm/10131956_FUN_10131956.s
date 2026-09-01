; FUN_10131956 @ 0x10131956 size=40
  push {r3,r4,r5,lr}
  bl 0x1013c70e
  cbnz r0,0x1013197a
  bl 0x10115464
  mov r5,r0
  bl 0x1013cd52
  subs r4,r0,#0x0
  blt 0x10131976
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x10115194
  mov r0,r4
  pop {r3,r4,r5,pc}
  movs r4,#0x0
  b 0x10131976
