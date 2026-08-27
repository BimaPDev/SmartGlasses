/* FUN_2c4f7308 @ 0x2c4f7308 */

undefined4 FUN_2c4f7308(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4f73c8;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4f73c8 = 0x2c4f731a;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*DAT_2c4f73cc == 0) {
    *DAT_2c4f73cc = 1;
    FUN_2c4bff40(0);
    FUN_2c674398();
    FUN_2c4bffe4(0,DAT_2c4f73d0);
    FUN_2c674558(DAT_2c4f73d4);
    FUN_2c4bffb0(0,param_1);
    FUN_2c4bfee0(0);
    FUN_2c674848(param_1 * 0x44c);
    FUN_2c674038();
    if (iVar4 == 0) {
      *DAT_2c4f73c8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar4);
    }
    iVar4 = FUN_2c64418c(DAT_2c4f73d8,1,0);
    *DAT_2c4f73dc = iVar4;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x89,DAT_2c4f73e8,DAT_2c4f73e4,DAT_2c4f73e0);
    }
    iVar4 = FUN_2c6448b4(iVar4,param_1 * 0xfa);
    uVar3 = 0;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4f73ec);
    }
  }
  else {
    if (iVar4 == 0) {
      *DAT_2c4f73c8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar4);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

