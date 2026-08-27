/* thunk_FUN_2c4dc570 @ 0x2c4daabc */

void thunk_FUN_2c4dc570(undefined4 param_1)

{
  int *piVar1;
  undefined4 uStack_c;
  
  piVar1 = (int *)*DAT_2c4dc5bc;
  uStack_c = param_1;
  if (piVar1 == (int *)0x0) {
    FUN_2c4e34f4(0x2ad1,0x21,1);
    FUN_2c4e0504(DAT_2c4dc5c4,0,0,0,DAT_2c4dc5cc,0x21,DAT_2c4dc5c8,0x1300,DAT_2c4dc5c0);
  }
  else {
    (**(code **)(*piVar1 + 0x10))(piVar1,&uStack_c);
  }
  return;
}

