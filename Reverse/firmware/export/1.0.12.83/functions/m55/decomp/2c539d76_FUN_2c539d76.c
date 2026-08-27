/* FUN_2c539d76 @ 0x2c539d76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c539d76(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar1 = _LAB_2c539e78;
  iVar10 = _LAB_2c539e78 * (param_3 >> 2);
  if (param_3 < 1) {
    puVar7 = (undefined4 *)*param_4;
    iVar3 = param_4[2];
  }
  else {
    iVar3 = param_4[2];
    puVar7 = (undefined4 *)*param_4;
    do {
      iVar9 = iVar1 * (iVar3 - (int)puVar7 >> 2);
      if (iVar10 <= iVar9) {
        iVar9 = iVar10;
      }
      puVar11 = param_2 + iVar9 * 7;
      iVar3 = iVar1 * (iVar9 * 0x1c >> 2);
      if (0 < iVar9 * 0x1c) {
        do {
          func_0x2c53bfe4(*puVar7,*param_2);
          func_0x2c53bfe4(puVar7[2],param_2[2]);
          func_0x2c53bfe4(puVar7[1],param_2[1]);
          iVar3 = iVar3 + -1;
          puVar7 = puVar7 + 7;
          param_2 = param_2 + 7;
        } while (iVar3 != 0);
        puVar7 = (undefined4 *)*param_4;
      }
      uVar5 = iVar1 * ((int)puVar7 - param_4[1] >> 2) + iVar9;
      if ((int)uVar5 < 0) {
        uVar4 = ~(uint)((ulonglong)_LAB_2c539e74 * (ulonglong)~uVar5 >> 0x22);
LAB_2c539e36:
        iVar3 = param_4[3];
        param_4[3] = iVar3 + uVar4 * 4;
        iVar8 = *(int *)(iVar3 + uVar4 * 4);
        iVar3 = iVar8 + 0x1f8;
        param_4[1] = iVar8;
        param_4[2] = iVar3;
        puVar7 = (undefined4 *)(iVar8 + (uVar5 + uVar4 * -0x12) * 0x1c);
        *param_4 = puVar7;
      }
      else {
        if (0x11 < (int)uVar5) {
          uVar4 = (int)((longlong)(int)_LAB_2c539e74 * (longlong)(int)uVar5 >> 0x22) -
                  ((int)uVar5 >> 0x1f);
          goto LAB_2c539e36;
        }
        iVar3 = param_4[2];
        puVar7 = puVar7 + iVar9 * 7;
        *param_4 = puVar7;
      }
      iVar10 = iVar10 - iVar9;
      param_2 = puVar11;
    } while (0 < iVar10);
  }
  uVar2 = param_4[1];
  uVar6 = param_4[3];
  *param_1 = puVar7;
  param_1[3] = uVar6;
  param_1[1] = uVar2;
  param_1[2] = iVar3;
  return;
}

