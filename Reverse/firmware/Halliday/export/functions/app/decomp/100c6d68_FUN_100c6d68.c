/* FUN_100c6d68 @ 0x100c6d68 */

undefined4 FUN_100c6d68(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  iVar2 = FUN_100c5d4c(0x200e,0);
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_100c6de8,DAT_100c6de4,DAT_100c6de0,0x6d5);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
    FUN_100a5b78(DAT_100c6df4 | (DAT_100c6df0 - DAT_100c6dec) * 0x20 & 0xff00U,DAT_100c6dfc,
                 DAT_100c6df8);
    uVar3 = 0xfffffff2;
  }
  else {
    local_1c = DAT_100c6e00;
    local_14 = 0;
    local_18 = 0xb;
    iVar4 = FUN_100c196c();
    *(undefined4 **)(iVar4 * 0xc + DAT_100c6e04 + 4) = &local_1c;
    uVar3 = FUN_100c5e48(0x200e,iVar2,0);
  }
  return uVar3;
}

