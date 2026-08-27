/* FUN_2c6237e4 @ 0x2c6237e4 */

int FUN_2c6237e4(undefined4 *param_1,byte *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar5;
  
  if (param_3 < 2) {
    return 0x35;
  }
  uVar8 = (uint)*param_2;
  uVar2 = DAT_2c6238fc * ((uint)param_2[1] + uVar8 * 0x100);
  if (uVar2 < DAT_2c623900 || uVar2 - DAT_2c623900 == 0) {
    if (((uVar8 & 0xf) != 8) || (0x7f < uVar8)) {
      return 0x19;
    }
    if ((int)((uint)param_2[1] << 0x1a) < 0) {
      iVar1 = 0x1a;
    }
    else {
      if ((code *)param_4[4] == (code *)0x0) {
        iVar1 = FUN_2c622e8c();
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = (*(code *)param_4[4])(param_1,param_1 + 1,param_2 + 2,param_3 - 2,param_4);
        param_1[2] = param_1[1];
        if (iVar1 != 0) {
          if (((uint)param_4[2] < (uint)param_1[1]) && (param_4[2] != 0)) {
            return 0x6d;
          }
          return 0x6e;
        }
      }
      if (*param_4 != 0) {
        return 0;
      }
      uVar2 = param_1[1];
      uVar8 = *(uint *)(param_2 + (param_3 - 4));
      if (uVar2 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = 1;
        uVar3 = 0;
        pbVar7 = (byte *)*param_1;
        do {
          uVar9 = uVar2;
          if (0x15af < uVar2) {
            uVar9 = 0x15b0;
          }
          uVar2 = uVar2 - uVar9;
          pbVar5 = pbVar7;
          do {
            pbVar4 = pbVar5 + 1;
            uVar6 = uVar6 + *pbVar5;
            uVar3 = uVar3 + uVar6;
            pbVar5 = pbVar4;
          } while (pbVar7 + uVar9 != pbVar4);
          uVar6 = uVar6 + (uint)((ulonglong)DAT_2c6238f8 * (ulonglong)uVar6 >> 0x2f) * -0xfff1;
          uVar3 = uVar3 + (uint)((ulonglong)DAT_2c6238f8 * (ulonglong)uVar3 >> 0x2f) * -0xfff1;
          pbVar7 = pbVar7 + uVar9;
        } while (uVar2 != 0);
        uVar6 = uVar6 | uVar3 * 0x10000;
      }
      iVar1 = 0;
      if ((uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) != uVar6) {
        iVar1 = 0x3a;
      }
    }
    return iVar1;
  }
  return 0x18;
}

