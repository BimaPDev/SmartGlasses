; FUN_14095028 @ 0x14095028 size=30
  push {r3,r4,r5,lr}
  mov r5,lr
  bl 0x14096b4c
  mov r4,r0
  cbz r0,0x1409503a
  ldr r4,[r0,#0x18]
  mov r0,r4
  pop {r3,r4,r5,pc}
  mov r3,r5
  ldr r2,[0x14095048]
  ldr r1,[0x1409504c]
  movs r0,#0x42
  bl 0x1402a64c
