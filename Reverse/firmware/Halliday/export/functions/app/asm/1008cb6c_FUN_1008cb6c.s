; FUN_1008cb6c @ 0x1008cb6c size=38
  push {r4,r5,r6,lr}
  movs r5,#0x0
  ldr r4,[0x1008cb94]
  ldr r6,[0x1008cb98]
  ldr r0,[r4,#0x0]
  cbz r0,0x1008cb7e
  mov r1,r6
  bl 0x10094268
  mov r0,r4
  movs r1,#0x1c
  adds r5,#0x1
  bl 0x1012787a
  cmp r5,#0x4
  add.w r4,r4,#0x1c
  bne 0x1008cb74
  pop {r4,r5,r6,pc}
