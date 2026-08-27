/* FUN_2c5ca178 @ 0x2c5ca178 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca178(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  
  iVar3 = FUN_2c48e42c(param_1,_LAB_2c5ca264);
  if ((param_4 != 0) && (iVar3 != 0)) {
    iVar4 = FUN_2c48e42c(iVar3,_LAB_2c5ca268);
    iVar5 = FUN_2c48e84c();
    puVar2 = _LAB_2c5ca26c;
    if ((iVar5 != 0) && (*(int *)(iVar4 + 0x10) != 0)) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 != 0x40) {
        *_LAB_2c5ca26c = 0x2c5ca1ac;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c62c3b0(param_4 + 5,0x40);
      uVar8 = *(undefined4 *)(iVar4 + 0x10);
      uVar6 = FUN_2c66c4ec(uVar8);
      FUN_2c674668(param_4 + 5,uVar8,uVar6);
      if (iVar5 == 0) {
        *_LAB_2c5ca26c = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar5);
      }
    }
    uVar6 = FUN_2c48e42c(iVar3,_LAB_2c5ca270);
    iVar3 = FUN_2c48e85c();
    if ((iVar3 != 0) &&
       (iVar3 = FUN_2c48e3f0(uVar6), uVar8 = _LAB_2c5ca274, puVar2 = _LAB_2c5ca26c, 0 < iVar3)) {
      iVar4 = 0;
      do {
        iVar5 = FUN_2c48e408(uVar6,iVar4);
        iVar7 = FUN_2c48e84c();
        if (((iVar7 != 0) && (*(int *)(iVar5 + 0x10) != 0)) &&
           (iVar5 = FUN_2c66b624(*(int *)(iVar5 + 0x10),uVar8), iVar5 == 0)) {
          iVar5 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            iVar5 = getBasePriority();
          }
          if (iVar5 != 0x40) {
            *puVar2 = 0x2c5ca246;
            puVar2[1] = unaff_lr;
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(0x40);
          }
          *(undefined1 *)(param_4 + 0x45) = 1;
          if (iVar5 == 0) {
            *puVar2 = 0xffffffff;
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(iVar5);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
  }
  return;
}

