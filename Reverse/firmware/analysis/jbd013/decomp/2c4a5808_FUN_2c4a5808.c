/* FUN_2c4a5808 @ 0x2c4a5808 */

undefined4 FUN_2c4a5808(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4a58ac;
  FUN_2c674268(DAT_2c4a58ac,0,0x20);
  *puVar2 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  puVar3 = DAT_2c4a58c0;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = isIRQinterruptsEnabled();
  }
  if ((uVar5 & 1) == 0) {
    *DAT_2c4a58c0 = 0x2c4a5832;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
    iVar4 = FUN_2c4bd450(0,0x28,puVar2,2,puVar2 + 1,4);
    *puVar3 = 0xffffffff;
    enableIRQinterrupts();
  }
  else {
    iVar4 = FUN_2c4bd450(0,0x28,puVar2,2,puVar2 + 1,4);
  }
  if (iVar4 == 0) {
    *param_2 = *(undefined4 *)(puVar2 + 1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x16c,DAT_2c4a58bc,DAT_2c4a58b8,DAT_2c4a58b4,DAT_2c4a58b0,0x16c,0,param_1,iVar4);
}

