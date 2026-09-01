/* FUN_1012dfba @ 0x1012dfba */

undefined4 FUN_1012dfba(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_100a0a70();
    }
    iVar1 = FUN_1012df42();
    if ((iVar1 == 2) && (*param_1 == '\x05')) {
      FUN_10064218(*(undefined4 *)(param_1 + 0x1c),0);
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10064180();
      uVar2 = 0;
    }
  }
  return uVar2;
}

