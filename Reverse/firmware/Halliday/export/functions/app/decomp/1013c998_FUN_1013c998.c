/* FUN_1013c998 @ 0x1013c998 */

undefined4 FUN_1013c998(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  
  if ((param_2 == (uint *)0x0) || (param_3 == 0)) {
    uVar5 = 0xffffffea;
  }
  else {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar3 = FUN_1013cd00(param_1 + 3);
    do {
      if (iVar3 == 0) {
        puVar4 = (uint *)param_1[1];
        if (puVar4 == (uint *)0x0) {
          *param_1 = (uint)param_2;
        }
        else {
          *puVar4 = (uint)param_2 | *puVar4 & 3;
        }
        param_1[1] = param_3;
        break;
      }
      *(uint **)(iVar3 + 0x14) = param_2;
      *(undefined4 *)(iVar3 + 0xcc) = 0;
      FUN_1013cc6c();
      param_2 = (uint *)*param_2;
      iVar3 = FUN_1013cd00(param_1 + 3);
    } while (param_2 != (uint *)0x0);
    FUN_1013cf62(param_1 + 5,4);
    FUN_10114a14(param_1 + 2,uVar5);
    uVar5 = 0;
  }
  return uVar5;
}

