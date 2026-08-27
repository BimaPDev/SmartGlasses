/* FUN_2c4bc22c @ 0x2c4bc22c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bc22c(uint param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  int iVar9;
  
  iVar7 = _LAB_2c4bc304;
  iVar9 = _LAB_2c4bc304 + param_1 * 0x70;
  if (*(char *)(iVar9 + 0xf) == '\0') {
    *(undefined1 *)(iVar9 + 0xf) = 0;
    *(undefined1 *)(iVar9 + 0xe) = *(undefined1 *)(iVar9 + 0xd);
    *(undefined1 *)(iVar9 + 0xc) = 1;
    puVar3 = DAT_2c4bc028;
    iVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar7 = getBasePriority();
    }
    if (iVar7 != 0x40) {
      *DAT_2c4bc028 = 0x2c4bbff2;
      puVar3[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    uVar8 = (uint)*DAT_2c4bc02c & ~(1 << (param_1 & 0xff));
    *DAT_2c4bc02c = (byte)uVar8;
    if (uVar8 == 0) {
      FUN_2c4be750(2);
    }
    if (iVar7 == 0) {
      *DAT_2c4bc028 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar7);
    }
    return;
  }
  uVar8 = (uint)*(byte *)(iVar9 + 0xe);
  if (1 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bc318,_LAB_2c4bc312_2,param_1,uVar8);
  }
  iVar5 = param_1 * 0x70 + uVar8 * 0x30 + _LAB_2c4bc304;
  puVar4 = *(uint **)(_LAB_2c4bc308 + param_1 * 0xc);
  cVar1 = *(char *)(iVar5 + 0x2c);
  if (*(int *)(iVar5 + 0x10) == 0) {
    if ((int)((uint)*(byte *)(iVar9 + 1) << 0x1d) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bc30c,param_1);
    }
  }
  else {
    puVar4[0xf] = 2;
  }
  if (cVar1 == '\x02') {
    puVar4[0xe] = 5;
  }
  puVar4[0xc] = 0xaff;
  if (-1 < (int)(puVar4[0x27] << 0x1f)) {
    *puVar4 = *puVar4 | 0x20;
    if ((int)((uint)*(byte *)(iVar7 + param_1 * 0x70 + 1) << 0x1d) < 0) {
      uVar8 = (uint)*(ushort *)(iVar7 + param_1 * 0x70 + uVar8 * 0x30 + 0x26);
      uVar6 = uVar8 & 0x3ff;
      if ((int)(uVar8 << 0x10) < 0) {
        uVar6 = uVar6 | _DAT_2c4bc310 & puVar4[1] | 0x1000;
      }
      else {
        uVar6 = uVar6 | _DAT_2c4bc310 & puVar4[1] & 0xffffefff;
      }
      puVar4[1] = uVar6;
    }
    puVar4[0x1b] = puVar4[0x1b] | 1;
  }
  return;
}

