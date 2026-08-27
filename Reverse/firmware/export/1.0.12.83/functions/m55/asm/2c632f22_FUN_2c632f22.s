; FUN_2c632f22 @ 0x2c632f22 size=40
  push {r4,lr}
  mov r4,r1
  cbz r0,0x2c632f30
  bl 0x2c62bea8
  movs r3,#0x0
  str r3,[r4,#0x2c]
  ldr r0,[r4,#0x30]
  cbz r0,0x2c632f3c
  bl 0x2c62bea8
  movs r3,#0x0
  str r3,[r4,#0x30]
  ldr r0,[r4,#0x28]
  cbz r0,0x2c632f48
  bl 0x2c62bea8
  movs r3,#0x0
  str r3,[r4,#0x28]
  pop {r4,pc}
