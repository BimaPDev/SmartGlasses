/* FUN_101135f8 @ 0x101135f8 */

undefined4 FUN_101135f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(DAT_10113674 + 8);
  iVar4 = getProcessStackPointer();
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if ((uVar2 == 0) || (*(int *)(iVar5 + 0xb8) != 0)) {
    iVar7 = *(int *)(iVar5 + 0x9c);
    iVar6 = iVar4 - iVar7;
    if (iVar6 < 0x80) {
      if (iVar6 < 1) {
        FUN_10119dc2(DAT_10113678);
        iVar3 = DAT_1011367c;
        if (iVar5 + 0x78 != 0) {
          iVar3 = iVar5 + 0x78;
        }
        FUN_10119dc2(DAT_10113680,iVar5,iVar3,iVar4,iVar7,-iVar6,param_3);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0);
        }
        param_1 = 2;
        software_interrupt(2);
      }
      else if (iVar6 < 0x41) {
        FUN_10119dc2(DAT_10113684);
        iVar3 = DAT_1011367c;
        if (iVar5 + 0x78 != 0) {
          iVar3 = iVar5 + 0x78;
        }
        param_1 = FUN_10119dc2(DAT_10113688,iVar5,iVar3,iVar4,iVar7,iVar6,param_3);
      }
    }
  }
  return param_1;
}

