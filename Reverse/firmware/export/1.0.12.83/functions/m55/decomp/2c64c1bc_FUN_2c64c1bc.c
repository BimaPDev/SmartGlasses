/* FUN_2c64c1bc @ 0x2c64c1bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c1bc(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  int iStack_2c;
  
  uVar3 = 1;
  iStack_2c = *_LAB_2c64c370;
  uVar5 = param_3 * 2;
  uStack_2f = 1;
  uStack_2e = 0;
  uStack_30 = (undefined1)param_1;
  if (param_2 == 1) {
    uStack_2d = 2;
    FUN_2c673bc8(&uStack_30);
    FUN_2c4c0248(param_1,0,0);
    piVar1 = _DAT_2c64c378;
    iVar6 = (param_1 & 7) + (param_1 >> 3) * 10;
    FUN_2c648600(_LAB_2c64c38c,iVar6);
    uStack_38 = _LAB_2c64c390;
    uStack_34 = _LAB_2c64c37c;
    *piVar1 = 0;
    FUN_2c4c0370(param_1,&uStack_38);
    if (uVar5 == 0) {
      uStack_38 = _LAB_2c64c394;
      uStack_34 = uVar5;
      FUN_2c4c0370(param_1,&uStack_38);
      uVar2 = _LAB_2c64c39c;
      if (*piVar1 != 0) goto LAB_2c64c362;
    }
    else {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        if (*piVar1 != 0) break;
        FUN_2c6444fc(500);
        bVar7 = uVar5 != uVar3;
        uVar3 = uVar3 + 1;
        uVar4 = uVar5 + 1;
      } while (bVar7);
      uStack_38 = _LAB_2c64c394;
      uStack_34 = 0;
      FUN_2c4c0370(param_1,&uStack_38);
      if (*piVar1 != 0) {
LAB_2c64c362:
        FUN_2c648600(_LAB_2c64c3a0,iVar6);
        goto LAB_2c64c278;
      }
      uVar2 = _LAB_2c64c39c;
      if (uVar4 < uVar5) {
        uVar2 = _LAB_2c64c380;
      }
    }
    FUN_2c648600(_LAB_2c64c398,iVar6,uVar2);
    goto LAB_2c64c278;
  }
  uStack_2d = 1;
  FUN_2c673bc8(&uStack_30,1,param_3,0);
  FUN_2c4c0248(param_1,0,1);
  piVar1 = _DAT_2c64c378;
  iVar6 = (param_1 & 7) + (param_1 >> 3) * 10;
  FUN_2c648600(_LAB_2c64c374,iVar6);
  uStack_34 = _LAB_2c64c37c;
  *piVar1 = 0;
  uStack_38 = 0x101;
  FUN_2c4c0370(param_1,&uStack_38);
  if (uVar5 == 0) {
    uStack_38 = 0x100;
    uStack_34 = uVar5;
    FUN_2c4c0370(param_1,&uStack_38);
    uVar2 = _LAB_2c64c39c;
    if (*piVar1 != 0) goto LAB_2c64c2a4;
  }
  else {
    do {
      uVar4 = uVar3;
      if (*piVar1 != 0) break;
      FUN_2c6444fc(500);
      bVar7 = uVar5 != uVar3;
      uVar3 = uVar3 + 1;
      uVar4 = uVar5 + 1;
    } while (bVar7);
    uStack_34 = 0;
    uStack_38 = 0x100;
    FUN_2c4c0370(param_1,&uStack_38);
    if (*piVar1 != 0) {
LAB_2c64c2a4:
      FUN_2c648600(_LAB_2c64c388,iVar6);
      goto LAB_2c64c278;
    }
    uVar2 = _LAB_2c64c39c;
    if (uVar4 < uVar5) {
      uVar2 = _LAB_2c64c380;
    }
  }
  FUN_2c648600(_LAB_2c64c384,iVar6,uVar2);
LAB_2c64c278:
  if (*_LAB_2c64c370 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

