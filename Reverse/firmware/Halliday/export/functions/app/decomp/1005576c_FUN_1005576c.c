/* FUN_1005576c @ 0x1005576c */

void FUN_1005576c(uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  FUN_1005d20c(0);
  if (param_1 == 0x600) {
    param_1 = 0;
    FUN_10119dc2(DAT_100557dc);
    *DAT_100557e0 = *DAT_100557e0 | 1;
  }
  FUN_10119dc2(DAT_100557e4,param_1);
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_10119dc2(DAT_100557e8,extraout_r1,0x20,uVar3);
  FUN_1011b6be();
  FUN_10119dc2(DAT_100557ec);
  FUN_10056ae4(6,0);
  *DAT_100557f0 = param_1 & 0xffff | 0x42520000;
  thunk_FUN_1011598c(500);
  *DAT_100557f4 = 0x5f;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

