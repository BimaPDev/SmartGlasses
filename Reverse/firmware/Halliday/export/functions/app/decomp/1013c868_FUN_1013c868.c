/* FUN_1013c868 @ 0x1013c868 */

undefined4 FUN_1013c868(uint *param_1,uint *param_2,uint *param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *extraout_r3;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_5 != '\0') {
    param_2 = (uint *)param_1[1];
  }
  iVar2 = FUN_1013cd00(param_1 + 3);
  if (iVar2 != 0) {
    *(uint **)(iVar2 + 0x14) = param_3;
    *(undefined4 *)(iVar2 + 0xcc) = 0;
    FUN_1013cc6c();
    goto LAB_1013c8a8;
  }
  if (param_4 == 0) {
    FUN_1013c864(param_3,0);
  }
  else {
    iVar2 = FUN_10116468(0,8);
    if (iVar2 == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      return 0xfffffff4;
    }
    *(uint **)(iVar2 + 4) = param_3;
    FUN_1013c864(iVar2,1);
    param_3 = extraout_r3;
  }
  uVar4 = *param_3 & 3;
  if (param_2 == (uint *)0x0) {
    *param_3 = uVar4 | *param_1;
    *param_1 = (uint)param_3;
    if (param_1[1] == 0) {
LAB_1013c8f2:
      param_1[1] = (uint)param_3;
    }
  }
  else if ((*param_2 & 0xfffffffc) == 0) {
    puVar3 = (uint *)param_1[1];
    *param_3 = uVar4;
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar3 & 3 | (uint)param_3;
      goto LAB_1013c8f2;
    }
    *param_1 = (uint)param_3;
    param_1[1] = (uint)param_3;
  }
  else {
    *param_3 = uVar4 | *param_2 & 0xfffffffc;
    *param_2 = (uint)param_3 | *param_2 & 3;
  }
  FUN_1013cf62(param_1 + 5,4);
LAB_1013c8a8:
  FUN_10114a14(param_1 + 2,uVar5);
  return 0;
}

