/* FUN_1406d250 @ 0x1406d250 */

void FUN_1406d250(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_14069298 + (param_1 + 0x22) * 4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140692a0,0x541,DAT_1406929c);
  }
  piVar3 = *(int **)(iVar5 + (uint)*(byte *)(param_2 + 0x10) * 4);
  if (piVar3 != (int *)0x0) {
    uVar1 = *(ushort *)((int)piVar3 + 0xe);
    uVar2 = uVar1 & 0x40;
    if (((uVar1 & 0x40) == 0) && (iVar5 = *piVar3, iVar5 != 0)) {
      iVar4 = (uint)*(byte *)(iVar5 + 0x2d) << 0x1c;
      if (-1 < iVar4) {
        uVar2 = iVar5 + ((*(byte *)(iVar5 + 0x2d) & 0xf) + 3) * 4;
      }
      FUN_14058748(uVar2,(uint)*(byte *)(param_2 + 0x10),iVar4,param_4);
      return;
    }
    *(ushort *)((int)piVar3 + 0xe) = uVar1 & 0xfdff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_140692a0,0x542,DAT_1406929c);
}

