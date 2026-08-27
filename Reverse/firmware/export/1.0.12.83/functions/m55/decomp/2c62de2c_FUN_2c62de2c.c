/* FUN_2c62de2c @ 0x2c62de2c */

undefined4 FUN_2c62de2c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1[1] != 0) {
    pcVar3 = *(code **)(param_1[1] + 0xc);
    if (pcVar3 == (code *)0x0) {
      uVar1 = 9;
    }
    else if (*param_1 == 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = (*pcVar3)();
      if ((*(short *)(param_1[1] + 2) != 0) && (iVar2 = param_1[2], iVar2 != 0)) {
        if (*(int *)(iVar2 + 0xc) != 0) {
          FUN_2c62bea8(*(int *)(iVar2 + 0xc));
          iVar2 = param_1[2];
        }
        FUN_2c62bea8(iVar2);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    return uVar1;
  }
  return 0xb;
}

