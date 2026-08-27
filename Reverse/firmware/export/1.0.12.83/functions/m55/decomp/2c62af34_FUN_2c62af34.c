/* FUN_2c62af34 @ 0x2c62af34 */

undefined4 FUN_2c62af34(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int *piVar7;
  byte bVar8;
  ushort *puVar9;
  
  if (*(ushort *)(param_1 + 1) == 0xffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62b02c,0xe2,DAT_2c62b028,DAT_2c62b024);
  }
  bVar8 = *(byte *)((int)param_1 + 7);
  uVar5 = (uint)bVar8;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      if ((*(ushort *)(param_1 + 1) & 0x3fff) == param_2) {
        *(undefined2 *)(param_1 + 1) = 0;
        *(undefined1 *)((int)param_1 + 7) = 0;
        return 1;
      }
    }
    else {
      piVar7 = (int *)*param_1;
      uVar3 = 0;
      puVar6 = (ushort *)((int)piVar7 + uVar5 * 4 + -2);
      puVar9 = puVar6;
      do {
        puVar9 = puVar9 + 1;
        if ((*puVar9 & 0x3fff) == param_2) {
          if (uVar5 == 2) {
            *(undefined1 *)((int)param_1 + 7) = 1;
            if (uVar3 == 0) {
              *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)piVar7 + 10);
              *param_1 = piVar7[1];
            }
            else {
              *(short *)(param_1 + 1) = (short)piVar7[(short)(ushort)bVar8];
              *param_1 = *piVar7;
            }
          }
          else {
            iVar2 = lv_mem_alloc((uVar5 - 1) * 6);
            if (iVar2 == 0) {
              return 0;
            }
            uVar5 = 0;
            *param_1 = iVar2;
            bVar8 = *(char *)((int)param_1 + 7) - 1;
            iVar4 = 0;
            *(byte *)((int)param_1 + 7) = bVar8;
            do {
              puVar6 = puVar6 + 1;
              if (*puVar6 != param_2) {
                *(int *)(iVar2 + iVar4 * 4) = piVar7[uVar5];
                iVar1 = iVar4 * 2;
                iVar4 = iVar4 + 1;
                *(ushort *)(iVar2 + iVar1 + (uint)bVar8 * 4) = *puVar6;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 <= *(byte *)((int)param_1 + 7));
          }
          FUN_2c62bea8(piVar7);
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
  }
  return 0;
}

