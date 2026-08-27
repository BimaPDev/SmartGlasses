/* FUN_2c5f05e8 @ 0x2c5f05e8 */

int FUN_2c5f05e8(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = DAT_2c5f0654;
  puVar2 = DAT_2c5f0650;
  puVar1 = DAT_2c5f064c;
  iVar5 = 0;
  if (*param_1 != '\0') {
    iVar9 = 0;
    iVar8 = 0;
    do {
      iVar5 = (*(code *)*puVar1)(param_1,iVar8);
      uVar6 = (*(code *)*puVar2)(param_1 + iVar5,0);
      uVar7 = FUN_2c5e2e58(uVar3);
      sVar4 = FUN_2c6298c0(uVar7,uVar6,0);
      iVar9 = (int)(short)(sVar4 + (short)iVar9);
      if (param_2 < iVar9) {
        return iVar5;
      }
      iVar8 = iVar8 + 1;
    } while (param_1[iVar5] != '\0');
  }
  return iVar5;
}

