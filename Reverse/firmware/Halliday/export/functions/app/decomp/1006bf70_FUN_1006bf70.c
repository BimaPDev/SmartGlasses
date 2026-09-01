/* FUN_1006bf70 @ 0x1006bf70 */

int FUN_1006bf70(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *local_24;
  undefined4 uStack_20;
  
  piVar6 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  if (((param_2 == (char *)0x0) || (iVar5 = FUN_1011ea10(param_2), iVar5 == 0)) || (*param_2 != '/')
     ) {
    uVar3 = (DAT_1006c048 - DAT_1006c044) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1006c04c | uVar3,DAT_1006c054,DAT_1006c050,uVar3,piVar6);
    iVar5 = -0x16;
  }
  else {
    iVar5 = FUN_1011ea18(param_2,DAT_1006c058);
    if (iVar5 == 0) {
      FUN_1006b9c8(0xffffffff,0xffffffff);
      piVar6 = DAT_1006c05c;
      param_1[1] = 0;
      piVar4 = (int *)*piVar6;
      if (piVar4 == piVar6) {
        piVar4 = (int *)0x0;
      }
      *param_1 = (int)piVar4;
      FUN_1006b9bc();
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_1006b9f4(&local_24,param_2,0);
      if (iVar5 < 0) {
        uVar3 = DAT_1006c060 | (DAT_1006c048 - DAT_1006c044) * 0x20 & 0xff00U;
        uVar2 = DAT_1006c068;
        iVar1 = DAT_1006c064;
      }
      else {
        param_1[1] = (int)local_24;
        if (*(code **)(*(int *)(local_24 + 0x1c) + 0x50) == (code *)0x0) {
          return iVar5;
        }
        iVar1 = (**(code **)(*(int *)(local_24 + 0x1c) + 0x50))(param_1,param_2,param_3,param_4);
        if (-1 < iVar1) {
          return iVar1;
        }
        uVar3 = (DAT_1006c048 - DAT_1006c044) * 0x20 & 0xff00U | 0x1b20011;
        uVar2 = DAT_1006c06c;
        iVar5 = iVar1;
      }
      FUN_100a5b78(uVar3,DAT_1006c054,uVar2,iVar1,piVar6);
    }
  }
  return iVar5;
}

