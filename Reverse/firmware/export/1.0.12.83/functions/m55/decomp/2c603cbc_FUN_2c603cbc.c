/* FUN_2c603cbc @ 0x2c603cbc */

undefined4 FUN_2c603cbc(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int *piVar8;
  byte bVar9;
  ushort *puVar10;
  
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
    piVar6 = *(int **)(param_1 + 0xc);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (((*(byte *)((int)piVar6 + 7) & 1) != 0) && ((piVar6[1] & 0xffffffU) == param_3)) {
        piVar6 = (int *)*piVar6;
        if (*(ushort *)(piVar6 + 1) == 0xffff) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c62b02c,0xe2,DAT_2c62b028,DAT_2c62b024);
        }
        bVar9 = *(byte *)((int)piVar6 + 7);
        uVar2 = (uint)bVar9;
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            if ((*(ushort *)(piVar6 + 1) & 0x3fff) != param_2) {
              return 0;
            }
            *(undefined2 *)(piVar6 + 1) = 0;
            *(undefined1 *)((int)piVar6 + 7) = 0;
            return 1;
          }
          piVar8 = (int *)*piVar6;
          uVar4 = 0;
          puVar7 = (ushort *)((int)piVar8 + uVar2 * 4 + -2);
          puVar10 = puVar7;
          do {
            puVar10 = puVar10 + 1;
            if ((*puVar10 & 0x3fff) == param_2) {
              if (uVar2 == 2) {
                *(undefined1 *)((int)piVar6 + 7) = 1;
                if (uVar4 == 0) {
                  *(undefined2 *)(piVar6 + 1) = *(undefined2 *)((int)piVar8 + 10);
                  *piVar6 = piVar8[1];
                }
                else {
                  *(short *)(piVar6 + 1) = (short)piVar8[(short)(ushort)bVar9];
                  *piVar6 = *piVar8;
                }
              }
              else {
                iVar3 = lv_mem_alloc((uVar2 - 1) * 6);
                if (iVar3 == 0) {
                  return 0;
                }
                uVar2 = 0;
                *piVar6 = iVar3;
                bVar9 = *(char *)((int)piVar6 + 7) - 1;
                iVar5 = 0;
                *(byte *)((int)piVar6 + 7) = bVar9;
                do {
                  puVar7 = puVar7 + 1;
                  if (*puVar7 != param_2) {
                    *(int *)(iVar3 + iVar5 * 4) = piVar8[uVar2];
                    iVar1 = iVar5 * 2;
                    iVar5 = iVar5 + 1;
                    *(ushort *)(iVar3 + iVar1 + (uint)bVar9 * 4) = *puVar7;
                  }
                  uVar2 = uVar2 + 1;
                } while (uVar2 <= *(byte *)((int)piVar6 + 7));
              }
              FUN_2c62bea8(piVar8);
              return 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
          return 0;
        }
        return 0;
      }
      piVar6 = piVar6 + 2;
    } while (uVar2 != (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3);
  }
  return 0;
}

