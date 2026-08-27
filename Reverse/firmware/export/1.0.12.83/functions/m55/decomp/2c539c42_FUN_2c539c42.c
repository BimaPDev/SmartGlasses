/* FUN_2c539c42 @ 0x2c539c42 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c539c42(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = _LAB_2c539d70;
  iVar10 = _LAB_2c539d70 * (param_2 >> 2);
  if (0 < param_2) {
    puVar3 = (undefined4 *)*param_4;
    puVar4 = (undefined4 *)param_4[1];
    iVar1 = _LAB_2c539d70 * ((int)puVar3 - (int)puVar4 >> 2);
    iVar5 = param_3;
    puVar8 = puVar3;
    iVar9 = iVar1;
    if (puVar3 != puVar4) goto LAB_2c539c7e;
    do {
      iVar5 = param_3;
      puVar8 = (undefined4 *)(*(int *)(param_4[3] + -4) + 0x1f8);
      iVar9 = 0x12;
LAB_2c539c7e:
      do {
        if (iVar10 <= iVar9) {
          iVar9 = iVar10;
        }
        param_3 = iVar5 + iVar9 * -0x1c;
        iVar11 = iVar7 * (iVar9 * 0x1c >> 2);
        if (0 < iVar9 * 0x1c) {
          do {
            func_0x2c53bfe4(puVar8[-7],*(undefined4 *)(iVar5 + -0x1c));
            func_0x2c53bfe4(puVar8[-5],*(undefined4 *)(iVar5 + -0x14));
            func_0x2c53bfe4(puVar8[-6],*(undefined4 *)(iVar5 + -0x18));
            iVar11 = iVar11 + -1;
            iVar5 = iVar5 + -0x1c;
            puVar8 = puVar8 + -7;
          } while (iVar11 != 0);
          puVar3 = (undefined4 *)*param_4;
          puVar4 = (undefined4 *)param_4[1];
          iVar1 = iVar7 * ((int)puVar3 - (int)puVar4 >> 2);
        }
        uVar2 = iVar1 - iVar9;
        if ((int)uVar2 < 0) {
          uVar6 = ~(uint)((ulonglong)_LAB_2c539d6c * (ulonglong)~uVar2 >> 0x22);
LAB_2c539d12:
          iVar5 = param_4[3];
          param_4[3] = iVar5 + uVar6 * 4;
          puVar4 = *(undefined4 **)(iVar5 + uVar6 * 4);
          param_4[1] = (int)puVar4;
          param_4[2] = (int)(puVar4 + 0x7e);
          puVar3 = puVar4 + (uVar2 + uVar6 * -0x12) * 7;
          *param_4 = (int)puVar3;
        }
        else {
          if (0x11 < (int)uVar2) {
            uVar6 = (int)((longlong)(int)_LAB_2c539d6c * (longlong)(int)uVar2 >> 0x22) -
                    ((int)uVar2 >> 0x1f);
            goto LAB_2c539d12;
          }
          puVar3 = puVar3 + iVar9 * -7;
          *param_4 = (int)puVar3;
        }
        iVar10 = iVar10 - iVar9;
        if (iVar10 < 1) goto LAB_2c539d42;
        iVar1 = iVar7 * ((int)puVar3 - (int)puVar4 >> 2);
        iVar5 = param_3;
        puVar8 = puVar3;
        iVar9 = iVar1;
      } while (puVar3 != puVar4);
    } while( true );
  }
  puVar3 = (undefined4 *)*param_4;
  puVar4 = (undefined4 *)param_4[1];
LAB_2c539d42:
  iVar10 = param_4[2];
  iVar7 = param_4[3];
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar4;
  param_1[2] = iVar10;
  param_1[3] = iVar7;
  return param_1;
}

