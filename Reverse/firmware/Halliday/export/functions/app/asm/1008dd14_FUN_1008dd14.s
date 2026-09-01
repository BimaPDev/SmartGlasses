; FUN_1008dd14 @ 0x1008dd14 size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  cbz r0,0x1008dd36
  ldr r3,[r0,#0xc]
  cbz r3,0x1008dd24
  mov r1,r4
  blx r3
  ldrb r3,[r4,#0x10]
  cmp r3,#0x1
  bne 0x1008dd36
  ldr r1,[0x1008dd38]
  ldr r0,[r4,#0x4]
  bl 0x10094268
  movs r3,#0x0
  str r3,[r4,#0x4]
  pop {r4,pc}
