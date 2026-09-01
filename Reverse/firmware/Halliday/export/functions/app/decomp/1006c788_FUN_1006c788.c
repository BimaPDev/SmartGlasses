/* FUN_1006c788 @ 0x1006c788 */

int FUN_1006c788(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14;
  
  pcVar7 = param_1;
  local_14 = param_2;
  if (((param_1 == (char *)0x0) || (uVar3 = FUN_1011ea10(), uVar3 < 2)) || (*param_1 != '/')) {
    uVar3 = (DAT_1006c818 - DAT_1006c814) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1006c81c | uVar3,DAT_1006c824,DAT_1006c820,uVar3,pcVar7);
    iVar5 = -0x16;
  }
  else {
    iVar5 = FUN_1006b9f4(&local_14,param_1,0);
    if (iVar5 < 0) {
      iVar6 = DAT_1006c818 - DAT_1006c814;
      uVar3 = DAT_1006c830;
      uVar2 = DAT_1006c828;
      iVar1 = DAT_1006c82c;
    }
    else {
      pcVar4 = *(code **)(*(int *)(local_14 + 0x1c) + 0x48);
      if (pcVar4 == (code *)0x0) {
        return iVar5;
      }
      iVar1 = (*pcVar4)(local_14,param_1,param_2);
      if (-1 < iVar1) {
        return iVar1;
      }
      iVar6 = DAT_1006c818 - DAT_1006c814;
      uVar3 = DAT_1006c838;
      uVar2 = DAT_1006c834;
      iVar5 = iVar1;
    }
    FUN_100a5b78(uVar3 | iVar6 * 0x20 & 0xff00U,DAT_1006c824,uVar2,iVar1,pcVar7);
  }
  return iVar5;
}

