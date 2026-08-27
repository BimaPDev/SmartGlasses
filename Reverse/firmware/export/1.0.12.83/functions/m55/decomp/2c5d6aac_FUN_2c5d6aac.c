/* FUN_2c5d6aac @ 0x2c5d6aac */

void FUN_2c5d6aac(void)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  byte in_stack_00000010;
  undefined1 in_stack_00000014;
  
  iVar1 = FUN_2c47245c(0,0xc);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = (uint)in_stack_00000010;
    *(undefined1 *)(iVar1 + 8) = in_stack_00000014;
    FUN_2c5dc53c(1,0x3fe,0,0,DAT_2c5c68e8,iVar1,unaff_r4,unaff_lr);
    FUN_2c5dc5e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xd8,DAT_2c5d6b0c,DAT_2c5d6b08,DAT_2c5d6b04);
}

