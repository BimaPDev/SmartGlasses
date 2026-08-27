; FUN_14095080 @ 0x14095080 size=30
  push {r3,r4,r5,lr}
  mov r5,lr
  bl 0x14096b4c
  mov r4,r0
  cbz r0,0x14095092
  ldr r4,[r0,#0x18]
  mov r0,r4
  pop {r3,r4,r5,pc}
  mov r3,r5
  ldr r2,[0x140950a0]
  ldr r1,[0x140950a4]
  movs r0,#0x42
  bl 0x1402a64c
