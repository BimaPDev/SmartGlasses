; FUN_1404ae04 @ 0x1404ae04 size=36
  ldr r1,[0x1404ae28]
  ldrb r3,[r1,#0x6]
  cbnz r3,0x1404ae0c
  bx lr
  push {r4,lr}
  movs r2,#0x6
  mov r4,r0
  bl 0x140db784
  cbz r0,0x1404ae1a
  pop {r4,pc}
  mov r1,r0
  ldr r2,[0x1404ae2c]
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x14048958
