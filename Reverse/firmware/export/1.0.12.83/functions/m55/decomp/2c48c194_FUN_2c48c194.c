/* FUN_2c48c194 @ 0x2c48c194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48c194(void)

{
  bool bVar1;
  undefined4 uVar2;
  int *in_r3;
  int iVar3;
  uint uVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  iVar3 = *in_r3;
  func_0x2c4f692c();
  if (*_LAB_2c48c200 != '\0') {
    uStack_1c = *_LAB_2c48c208;
    uStack_18 = _LAB_2c48c208[1];
    uStack_14 = _LAB_2c48c208[2];
    puStack_10 = (undefined4 *)CONCAT31(puStack_10._1_3_,(char)_LAB_2c48c208[3]);
    FUN_2c49737c(0x47,&uStack_1c,0xd);
  }
  if (*_LAB_2c48c1fc != iVar3) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar2 = *_LAB_2c48c204;
  puStack_10 = _LAB_2c48c204;
  FUN_2c643ae8();
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        return uVar2;
      }
    }
  }
  FUN_2c643ad8(uVar2,0xfffffffa);
  return 0xfffffffa;
}

