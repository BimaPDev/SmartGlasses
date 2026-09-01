; FUN_10078bfc @ 0x10078bfc size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x10078c20]
  ldr r3,[r5,#0x0]
  lsls r3,r3,#0x6
  bmi 0x10078c16
  cmp r4,#0x0
  ble 0x10078c1a
  movs r0,#0x1
  bl 0x1011598c
  subs r4,#0x1
  b 0x10078c02
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  mvn r0,#0xa
  b 0x10078c18
