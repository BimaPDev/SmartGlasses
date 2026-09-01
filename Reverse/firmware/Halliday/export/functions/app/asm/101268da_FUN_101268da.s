; FUN_101268da @ 0x101268da size=58
  push {r3,r4,r5,r6,r7,lr}
  mov r7,r0
  bl 0x10126fd2
  movs r4,#0x0
  mov r6,r0
  cmp r4,r6
  bne 0x101268ec
  pop {r3,r4,r5,r6,r7,pc}
  ldr r3,[r7,#0x8]
  ldr r3,[r3,#0x0]
  ldr.w r5,[r3,r4,lsl #0x2]
  adds r4,#0x1
  mov r0,r5
  bl 0x10125af4
  movs r2,#0x0
  movs r1,#0x2a
  mov r0,r5
  bl 0x10086f50
  mov r0,r5
  bl 0x10125af4
  mov r0,r5
  bl 0x101268da
  b 0x101268e6
