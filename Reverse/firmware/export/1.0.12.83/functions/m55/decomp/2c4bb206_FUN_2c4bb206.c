/* FUN_2c4bb206 @ 0x2c4bb206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bb206(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  iVar7 = _LAB_2c4bb2ec;
  if (!in_CY || in_ZR) {
    uVar6 = (uint)*(char *)(_LAB_2c4bb2ec + param_1 * 0xc + 4);
    if ((-1 < (int)uVar6) && (uVar6 != 0x48)) {
      *(int *)(_LAB_2c4bb2f0 + ((uVar6 >> 5) + 0x20) * 4) = 1 << (uVar6 & 0x1f);
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
    puVar4 = _LAB_2c4bb2f8;
    if (*_LAB_2c4bb2f4 != '\0') {
      iVar8 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *_LAB_2c4bb2f8 = 0x2c4bb254;
        puVar4[1] = unaff_lr;
      }
      iVar5 = _LAB_2c4bb300;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x40);
      }
      if (*(char *)(_LAB_2c4bb300 + param_1) != -1) {
        FUN_2c4bedd8();
        FUN_2c4beffc(*(undefined1 *)(iVar5 + param_1));
        *(undefined1 *)(iVar5 + param_1) = 0xff;
      }
      iVar5 = _LAB_2c4bb304;
      if (*(char *)(_LAB_2c4bb304 + param_1) != -1) {
        FUN_2c4bedd8();
        FUN_2c4beffc(*(undefined1 *)(iVar5 + param_1));
        *(undefined1 *)(iVar5 + param_1) = 0xff;
      }
      if (iVar8 == 0) {
        *_LAB_2c4bb2f8 = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar8);
      }
    }
    iVar8 = *(int *)(iVar7 + param_1 * 0xc);
    iVar7 = iVar7 + param_1 * 0xc;
    uVar1 = *(undefined1 *)(iVar7 + 6);
    *(uint *)(iVar8 + 0x30) = *(uint *)(iVar8 + 0x30) & 0xfffffffe;
    *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & 0xffffffef;
    FUN_2c673af8(uVar1);
    uVar2 = *(undefined1 *)(iVar7 + 5);
    FUN_2c673af8(uVar2);
    FUN_2c673ce8(uVar1);
    FUN_2c673ce8(uVar2);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bb2fc,param_1);
}

