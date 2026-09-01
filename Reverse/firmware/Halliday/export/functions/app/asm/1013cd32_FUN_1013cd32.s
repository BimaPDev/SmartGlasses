; FUN_1013cd32 @ 0x1013cd32 size=32
  push {r3,r4,r5,lr}
  mov r5,r0
  movs r0,#0x0
  ldr r4,[r5,#0x0]
  cmp r5,r4
  beq 0x1013cd40
  cbnz r4,0x1013cd42
  pop {r3,r4,r5,pc}
  mov r0,r4
  bl 0x1013cc34
  mov r0,r4
  bl 0x1013cc6c
  movs r0,#0x1
  b 0x1013cd38
