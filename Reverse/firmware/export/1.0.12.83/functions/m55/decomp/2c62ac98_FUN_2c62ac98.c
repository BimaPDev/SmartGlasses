/* FUN_2c62ac98 @ 0x2c62ac98 */

void FUN_2c62ac98(int *param_1,uint param_2,undefined4 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined2 *puVar4;
  char cVar5;
  undefined2 *puVar7;
  ushort *puVar8;
  int iVar9;
  bool bVar10;
  byte bVar6;
  
  if (*(ushort *)(param_1 + 1) == 0xffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62adf8,0x1a3,DAT_2c62adf4,DAT_2c62adf0);
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 7);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
      if ((*(ushort *)(param_1 + 1) & 0x3fff) == (param_2 & 0x3fff)) {
        puVar8 = (ushort *)(param_1 + 1);
LAB_2c62ad86:
                    /* WARNING: Could not recover jumptable at 0x2c62ad92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3,puVar8,param_1);
        return;
      }
      piVar2 = (int *)lv_mem_alloc(0xc);
      if (piVar2 == (int *)0x0) {
        return;
      }
      bVar6 = *(char *)((int)param_1 + 7) + 1;
      iVar1 = *param_1;
      *param_1 = (int)piVar2;
      *(byte *)((int)param_1 + 7) = bVar6;
      *(short *)(piVar2 + bVar6) = (short)param_1[1];
      *piVar2 = iVar1;
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,(int)piVar2 + (uint)bVar6 * 4 + 2,piVar2 + 1);
    }
    else {
      *(undefined1 *)((int)param_1 + 7) = 1;
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_1 + 1,param_1);
    }
  }
  else {
    iVar9 = uVar3 - 1;
    iVar1 = *param_1;
    puVar8 = (ushort *)(iVar9 * 2 + uVar3 * 4 + iVar1);
    do {
      if ((param_2 & 0x3fff) == (*puVar8 & 0x3fff)) {
        param_1 = (int *)(iVar1 + iVar9 * 4);
        goto LAB_2c62ad86;
      }
      bVar10 = iVar9 != 0;
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + -1;
    } while (bVar10);
    iVar1 = FUN_2c62bebc(iVar1,(uVar3 + 1) * 6);
    if (iVar1 == 0) {
      return;
    }
    uVar3 = (uint)*(byte *)((int)param_1 + 7);
    *param_1 = iVar1;
    iVar9 = iVar1 + uVar3 * 4;
    if (uVar3 == 0) {
      cVar5 = '\0';
    }
    else {
      puVar7 = (undefined2 *)(iVar9 + (uVar3 + 2) * 2);
      puVar4 = (undefined2 *)(iVar9 + (uVar3 - 1) * 2);
      do {
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar4;
        puVar4 = puVar4 + -1;
      } while ((undefined2 *)(iVar9 + 4) != puVar7);
      cVar5 = *(char *)((int)param_1 + 7);
    }
    bVar6 = cVar5 + 1;
    *(byte *)((int)param_1 + 7) = bVar6;
    (*UNRECOVERED_JUMPTABLE)
              (param_2,param_3,iVar1 + (uint)bVar6 * 6 + -2,iVar1 + (uint)bVar6 * 4 + -4);
  }
  if (((param_2 & 0x3fff) >> 4 & 0x18) != 0) {
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
    return;
  }
  *(byte *)((int)param_1 + 6) =
       (byte)(1 << ((param_2 & 0x3fff) >> 4 & 0x1f)) | *(byte *)((int)param_1 + 6);
  return;
}

