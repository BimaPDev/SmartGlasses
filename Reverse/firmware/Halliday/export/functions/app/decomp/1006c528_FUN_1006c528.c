/* FUN_1006c528 @ 0x1006c528 */

int FUN_1006c528(char *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int local_14;
  
  pcVar4 = param_1;
  local_14 = param_2;
  if (((param_1 == (char *)0x0) || (uVar1 = FUN_1011ea10(), uVar1 < 2)) || (*param_1 != '/')) {
    FUN_100a5b78((DAT_1006c5c0 - DAT_1006c5bc) * 0x20 & 0xff00U | 0x2b40011,DAT_1006c5c8,
                 DAT_1006c5c4,DAT_1006c5bc,pcVar4);
    iVar3 = -0x16;
  }
  else {
    iVar3 = FUN_1006b9f4(&local_14,param_1,0);
    if (iVar3 < 0) {
      uVar1 = (DAT_1006c5c0 - DAT_1006c5bc) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_1006c5cc | uVar1,DAT_1006c5c8,DAT_1006c5d0,uVar1,pcVar4);
    }
    else {
      pcVar2 = *(code **)(*(int *)(local_14 + 0x1c) + 0x44);
      if ((pcVar2 != (code *)0x0) && (iVar3 = (*pcVar2)(local_14,param_1,param_2), iVar3 < 0)) {
        FUN_100a5b78(DAT_1006c5d4 | (DAT_1006c5c0 - DAT_1006c5bc) * 0x20 & 0xff00U,DAT_1006c5c8,
                     DAT_1006c5d8,iVar3,pcVar4);
      }
    }
  }
  return iVar3;
}

