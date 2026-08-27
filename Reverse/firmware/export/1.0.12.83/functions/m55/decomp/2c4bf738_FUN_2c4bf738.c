/* FUN_2c4bf738 @ 0x2c4bf738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bf738(uint param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_r5;
  int iVar10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  int iStack_2c;
  char acStack_28 [4];
  uint uStack_24;
  
  iVar9 = _LAB_2c4bf98c;
  puVar6 = _LAB_2c4bf988;
  iVar5 = _LAB_2c4bf984;
  iVar4 = _LAB_2c4bf978;
  uStack_24 = *DAT_2c4bf974;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf9a0,param_1,param_3,0);
  }
  iVar10 = param_1 * 2;
  if (param_1 == 1) {
    unaff_r5 = _LAB_2c4bf97c;
  }
  iVar7 = _LAB_2c4bf978 + param_1 * 2;
  if (param_1 != 1) {
    unaff_r5 = _LAB_2c4bf980;
  }
  cVar1 = *(char *)(iVar7 + param_2);
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x151,_LAB_2c4bf99c,_LAB_2c4bf998,_LAB_2c4bf994,param_2,cVar1);
  }
  if (*(char *)(_LAB_2c4bf984 + param_1) == '\x02') {
    if (*(char *)(_LAB_2c4bf990 + iVar10 + param_2) != '\0') {
      puVar11 = &stack0xffffffe0 + param_2;
      puVar3 = &stack0x00000008;
      if (param_2 == 0) {
        puVar3 = &stack0x00000009;
      }
      acStack_28[param_2] = '\0';
      puVar3[-0x30] = 0;
      goto LAB_2c4bf790;
    }
    uVar8 = (uint)(param_2 == 0);
    cVar1 = *(char *)(iVar7 + uVar8);
    puVar11 = &stack0xffffffe0 + param_2;
    acStack_28[param_2] = '\x01';
    if ((cVar1 != '\x02') || (*(char *)(_LAB_2c4bf990 + iVar10 + uVar8) == '\0')) goto LAB_2c4bf786;
    acStack_28[uVar8] = '\x01';
    if (param_2 != 0) goto LAB_2c4bf870;
LAB_2c4bf794:
    iVar9 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      *_LAB_2c4bf988 = 0x2c4bf7a0;
      puVar6[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    *(undefined4 *)(unaff_r5 + 0x54) = 1;
    *(undefined4 *)(unaff_r5 + 0x2c) = 1;
    iVar7 = _LAB_2c4bf98c;
    if ((acStack_28[0] != '\0') &&
       (*(undefined4 *)(unaff_r5 + 8) = 1, iVar7 = _LAB_2c4bf98c,
       *(char *)(_LAB_2c4bf98c + param_1 * 2) != '\0')) {
      *(uint *)(unaff_r5 + 0x1c8) = *(uint *)(unaff_r5 + 0x1c8) | 2;
    }
    if (acStack_28[1] != '\0') {
      *(undefined4 *)(unaff_r5 + 4) = 1;
    }
    if (iVar9 == 0) {
      *_LAB_2c4bf988 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar9);
    }
    if (*(char *)(iVar7 + param_1 * 2) == '\0') goto LAB_2c4bf8d6;
    if (*(char *)(iVar5 + param_1) != '\x01') goto LAB_2c4bf8dc;
    iStack_2c = 0;
    do {
      iStack_2c = iStack_2c + 1;
    } while (iStack_2c < 0x32);
  }
  else {
    puVar11 = &stack0xffffffe0 + param_2;
    uVar8 = (uint)(param_2 == 0);
    acStack_28[param_2] = '\x01';
LAB_2c4bf786:
    acStack_28[uVar8] = '\0';
LAB_2c4bf790:
    if (param_2 == 0) goto LAB_2c4bf794;
LAB_2c4bf870:
    if (*(char *)(_LAB_2c4bf98c + iVar10 + param_2) != '\0') {
      *(uint *)(unaff_r5 + 0x1c8) = *(uint *)(unaff_r5 + 0x1c8) | 1;
    }
    *(undefined4 *)(unaff_r5 + 0x50) = 1;
    *(undefined4 *)(unaff_r5 + 0x28) = 1;
    puVar6 = _LAB_2c4bf988;
    iVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar7 = getBasePriority();
    }
    if (iVar7 != 0x40) {
      *_LAB_2c4bf988 = 0x2c4bf88c;
      puVar6[1] = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (puVar11[-8] != '\0') {
      *(undefined4 *)(unaff_r5 + 4) = 1;
    }
    if ((acStack_28[0] != '\0') &&
       (cVar1 = *(char *)(iVar9 + param_1 * 2), *(undefined4 *)(unaff_r5 + 8) = 1, cVar1 != '\0')) {
      *(uint *)(unaff_r5 + 0x1c8) = *(uint *)(unaff_r5 + 0x1c8) | 2;
    }
    if (iVar7 == 0) {
      *_LAB_2c4bf988 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar7);
    }
LAB_2c4bf8d6:
    if (*(char *)(iVar5 + param_1) != '\x01') goto LAB_2c4bf8dc;
  }
  if ((*(char *)(_LAB_2c4bf990 + iVar10 + param_2) == '\0') &&
     (-1 < *(int *)(unaff_r5 + 0xc) << 0x1f)) {
    func_0x2c673cf8();
    *(undefined4 *)(unaff_r5 + 0xc) = 1;
  }
LAB_2c4bf8dc:
  *(undefined1 *)(iVar10 + iVar4 + param_2) = 2;
  if ((*DAT_2c4bf974 ^ uStack_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0,param_2,*DAT_2c4bf974 ^ uStack_24,0);
}

