/* FUN_14058748 @ 0x14058748 */

byte FUN_14058748(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_140587cc;
  bVar4 = *(byte *)(param_1 + 1);
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_140587cc = 0x14058758;
    puVar2[1] = unaff_lr;
  }
  iVar3 = DAT_140587d0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if ((bVar4 < 3) && (*(int *)(DAT_140587d0 + (uint)bVar4 * 4) != 0)) {
    if (*param_1 == -1) {
      param_1[1] = *(ushort *)(param_1 + 1) & 0xffffbfff | param_2 << 0x10 | 0x8000;
      FUN_140739f0(iVar3 + 0x38,param_1);
      bVar4 = *(byte *)(iVar3 + 0x4e) & 6;
      if ((*(byte *)(iVar3 + 0x4e) & 6) == 0) {
        FUN_14072a44(bVar4,iVar3 + 0x30);
        *(byte *)(iVar3 + 0x4e) = *(byte *)(iVar3 + 0x4e) | 2;
      }
      else {
        bVar4 = 0;
      }
    }
    else {
      bVar4 = 0x40;
    }
  }
  else {
    bVar4 = 0x43;
  }
  if (iVar5 == 0) {
    *DAT_140587cc = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  return bVar4;
}

