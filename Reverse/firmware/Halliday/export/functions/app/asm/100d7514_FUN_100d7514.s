; FUN_100d7514 @ 0x100d7514 size=38
  push {r4,r5,r6,lr}
  mov r5,r0
  movs r4,#0xac
  ldr r6,[0x100d753c]
  ldr r1,[r6,#0x0]
  movs r2,#0x6
  mov r0,r5
  add r1,r4
  bl 0x1011ea30
  cbz r0,0x100d7536
  adds r4,#0x28
  cmp.w r4,#0x14c
  bne 0x100d751c
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  movs r0,#0x1
  b 0x100d7534
