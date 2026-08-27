/* FUN_2c4c0db4 @ 0x2c4c0db4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c0db4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 unaff_lr;
  
  puVar3 = _LAB_2c4c0e88;
  puVar2 = _LAB_2c4c0e84;
  uVar5 = 0;
  _LAB_2c4c0e84[4] = 0;
  *puVar3 = param_2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2 = _LAB_2c4c0e8c;
  iVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    uVar5 = 0x2c4c0dd6;
    *_LAB_2c4c0e8c = 0x2c4c0dd6;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  func_0x2c673b48(8,param_2,uVar5,0x40,param_4);
  piVar8 = _LAB_2c4c0e98;
  uVar5 = _LAB_2c4c0e94;
  puVar2 = _LAB_2c4c0e90;
  if (param_1 == 0) {
    *_LAB_2c4c0e90 = 0;
    puVar2[1] = 0;
    func_0x2c6739b8(0,uVar5);
    iVar6 = FUN_2c4c2564(_LAB_2c4c0ea0,0);
    *piVar8 = iVar6;
    func_0x2c673d18(1);
  }
  else {
    iVar6 = 10;
    do {
      FUN_2c673e08(0x140);
      iVar4 = func_0x2c6746d8();
      piVar8 = _LAB_2c4c0e98;
      uVar5 = _LAB_2c4c0e94;
      puVar2 = _LAB_2c4c0e90;
      if (iVar4 == 0) {
        uVar5 = 0xffffffff;
        goto LAB_2c4c0e62;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *_LAB_2c4c0e90 = 0;
    puVar2[1] = 0;
    func_0x2c6739b8(0,uVar5);
    iVar6 = FUN_2c4c2564(_LAB_2c4c0e9c,0);
    *piVar8 = iVar6;
    uVar5 = FUN_2c673c88();
    func_0x2c673d18(0);
    iVar6 = func_0x2c674338();
    *(char *)((int)puVar2 + 2) = (char)iVar6;
    if (iVar6 == 0) {
      *(undefined1 *)((int)puVar2 + 1) = 1;
    }
    else {
      *(undefined1 *)puVar2 = 1;
    }
    puVar2[1] = uVar5;
    func_0x2c4c06c0();
  }
  if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c0ea4);
  }
  uVar5 = 0;
LAB_2c4c0e62:
  if (iVar7 == 0) {
    *_LAB_2c4c0e8c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar7);
  }
  return uVar5;
}

