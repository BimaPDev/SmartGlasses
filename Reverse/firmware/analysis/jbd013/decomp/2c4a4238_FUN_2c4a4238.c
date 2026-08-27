/* FUN_2c4a4238 @ 0x2c4a4238 */

undefined4 FUN_2c4a4238(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  ushort local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  int local_1c;
  
  puVar2 = DAT_2c4a42ec;
  local_24 = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  uStack_22 = 0;
  local_1c = *DAT_2c4a42e8;
  local_20 = 0;
  uStack_1e = 0;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = isIRQinterruptsEnabled();
  }
  if ((uVar4 & 1) == 0) {
    *DAT_2c4a42ec = 0x2c4a4264;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
    iVar3 = FUN_2c4bd450(0,0x28,&local_24,2,&uStack_22,4);
    *puVar2 = 0xffffffff;
    enableIRQinterrupts();
  }
  else {
    iVar3 = FUN_2c4bd450(0,0x28,&local_24,2,&uStack_22,4);
  }
  if (iVar3 == 0) {
    *param_2 = CONCAT22(local_20,uStack_22);
    if (*DAT_2c4a42e8 != local_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1db,DAT_2c4a42fc,DAT_2c4a42f8,DAT_2c4a42f4,DAT_2c4a42f0,0x1db,0,param_1,iVar3);
}

