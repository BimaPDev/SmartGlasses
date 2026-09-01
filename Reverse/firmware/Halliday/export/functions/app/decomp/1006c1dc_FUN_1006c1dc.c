/* FUN_1006c1dc @ 0x1006c1dc */

int FUN_1006c1dc(char *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int local_14;
  undefined4 uStack_10;
  
  pcVar4 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  if (((param_1 == (char *)0x0) || (uVar1 = FUN_1011ea10(), uVar1 < 2)) || (*param_1 != '/')) {
    FUN_100a5b78((DAT_1006c288 - DAT_1006c284) * 0x20 & 0xff00U | 0x22c0011,DAT_1006c290,
                 DAT_1006c28c,DAT_1006c284,pcVar4);
    iVar3 = -0x16;
  }
  else {
    iVar3 = FUN_1006b9f4(&local_14,param_1,0);
    if (iVar3 < 0) {
      uVar1 = (DAT_1006c288 - DAT_1006c284) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_1006c294 | uVar1,DAT_1006c290,DAT_1006c298,uVar1,pcVar4);
    }
    else if ((int)((uint)*(byte *)(local_14 + 0x20) << 0x1e) < 0) {
      iVar3 = -0x1e;
    }
    else {
      pcVar2 = *(code **)(*(int *)(local_14 + 0x1c) + 0x3c);
      if (pcVar2 == (code *)0x0) {
        iVar3 = -0x86;
      }
      else {
        iVar3 = (*pcVar2)(local_14,param_1);
        if (iVar3 < 0) {
          FUN_100a5b78((DAT_1006c288 - DAT_1006c284) * 0x20 & 0xff00U | 0x2400011,DAT_1006c290,
                       DAT_1006c29c,iVar3,pcVar4);
        }
      }
    }
  }
  return iVar3;
}

