/* FUN_2c4be586 @ 0x2c4be586 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4be586(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4be66c,param_1);
  }
  iVar5 = FUN_2c4be540();
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4be668,param_1);
  }
  FUN_2c674278(1,0xb);
  puVar7 = _LAB_2c4be644;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_LAB_2c4be644 = 0x2c4be5aa;
    puVar7[1] = unaff_lr;
  }
  pcVar4 = _LAB_2c4be648;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_LAB_2c4be648 == '\f') {
    *_LAB_2c4be648 = '\r';
    func_0x2c4be4f8(param_1);
    puVar6 = *(undefined4 **)(_LAB_2c4be650 + param_1 * 4);
    puVar2 = _LAB_2c4be654;
    for (puVar7 = *(undefined4 **)(_LAB_2c4be64c + param_1 * 4); puVar7 < puVar6;
        puVar7 = puVar7 + 1) {
      *puVar2 = *puVar7;
      puVar2 = puVar2 + 1;
    }
    puVar6 = *(undefined4 **)(_LAB_2c4be65c + param_1 * 4);
    puVar2 = _LAB_2c4be660;
    iVar3 = _LAB_2c4be664;
    for (puVar7 = *(undefined4 **)(_LAB_2c4be658 + param_1 * 4); _LAB_2c4be664 = iVar3,
        puVar7 < puVar6; puVar7 = puVar7 + 1) {
      *puVar2 = *puVar7;
      puVar2 = puVar2 + 1;
      iVar3 = _LAB_2c4be664;
    }
    *pcVar4 = (char)param_1;
    *(undefined1 *)(iVar3 + param_1) = 1;
    uVar8 = 0;
  }
  else if (*_LAB_2c4be648 == '\r') {
    uVar8 = 2;
  }
  else {
    uVar8 = 3;
  }
  if (iVar5 == 0) {
    *_LAB_2c4be644 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  FUN_2c674278(1,0);
  return uVar8;
}

