/* FUN_2c488334 @ 0x2c488334 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c488334(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte bStack_28;
  undefined1 uStack_27;
  int iStack_24;
  
  bVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
  FUN_2c648600(_LAB_2c488358);
  puVar3 = _LAB_2c488fd4;
  iVar9 = _LAB_2c48835c;
  iStack_24 = *_LAB_2c488fa0;
  if (2 < bVar4) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x160,_LAB_2c488fb8,_LAB_2c488fbc,_LAB_2c488fc8,bVar4);
  }
  if (_LAB_2c48835c == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x166,_LAB_2c488fb8,_LAB_2c488fbc,_LAB_2c488fd0);
  }
  if (*_LAB_2c488fa4 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x16b,_LAB_2c488fb8,_LAB_2c488fbc,_LAB_2c488fc4);
  }
  pbVar5 = (byte *)FUN_2c4728e8(5,8);
  puVar2 = _LAB_2c488fa8;
  *pbVar5 = bVar4;
  *(int *)(pbVar5 + 4) = iVar9;
  FUN_2c644044(*puVar3,0xffffffff);
  iVar6 = FUN_2c4858f0(*puVar2,_LAB_2c488fac,pbVar5);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x175,_LAB_2c488fb8,_LAB_2c488fbc,_LAB_2c488fb4,_LAB_2c488fb0,iVar9);
  }
  FUN_2c4857c8(*puVar2,pbVar5);
  if (bVar4 == 2) {
    iVar9 = *_LAB_2c488fcc;
    *_LAB_2c488fcc = iVar9 + 1;
    uStack_27 = (undefined1)(iVar9 + 1);
    bStack_28 = bVar4;
    FUN_2c49737c(0x23,&bStack_28,2);
  }
  else {
    *_LAB_2c488fc0 = *_LAB_2c488fc0 + 1;
    func_0x2c488818(bVar4);
  }
  if (*_LAB_2c488fa0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar7 = *puVar3;
  FUN_2c643b2c();
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getCurrentExceptionNumber();
    uVar8 = uVar8 & 0x1ff;
  }
  if (uVar8 == 0) {
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = isIRQinterruptsEnabled();
    }
    if (iVar9 == 0) {
      iVar9 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar9 = getBasePriority();
      }
      if (iVar9 == 0) {
        software_interrupt(0);
        return uVar7;
      }
    }
  }
  FUN_2c643b08(uVar7,0xfffffffa);
  return 0xfffffffa;
}

