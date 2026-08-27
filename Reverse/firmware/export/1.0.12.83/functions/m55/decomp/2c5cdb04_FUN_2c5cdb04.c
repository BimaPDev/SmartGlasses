/* FUN_2c5cdb04 @ 0x2c5cdb04 */

/* WARNING: Instruction at (ram,0x2c5cdb6c) overlaps instruction at (ram,0x2c5cdb6a)
    */
/* WARNING: Removing unreachable block (ram,0x2c5cdb0a) */
/* WARNING: Removing unreachable block (ram,0x2c5cdb0e) */
/* WARNING: Removing unreachable block (ram,0x2c5cdb12) */
/* WARNING: Removing unreachable block (ram,0x2c5cda6e) */
/* WARNING: Removing unreachable block (ram,0x2c5cda7c) */
/* WARNING: Removing unreachable block (ram,0x2c5cdb00) */
/* WARNING: Removing unreachable block (ram,0x2c5cdb48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c5cdb04(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r7;
  undefined4 in_cr6;
  undefined8 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_0000004c;
  
  coprocessor_loadlong(8,in_cr6,unaff_r7);
  _MasterStackPointer = (short)in_r3[5] + 0x76c;
  cRam00000002 = (char)in_r3[4] + '\x01';
  uRam00000003 = (undefined1)in_r3[3];
  uRam00000005 = (undefined1)in_r3[2];
  DAT_00000006 = (undefined1)in_r3[1];
  uRam00000007 = (undefined1)*in_r3;
  Reset = (char)in_r3[6] + '\x01';
  FUN_2c674268(&stack0x00000010,0,0x3c);
  in_stack_00000008 = 1;
  in_stack_0000000c = 0;
  FUN_2c62ef08(&stack0x00000008);
  uVar1 = FUN_2c6743d8(in_stack_00000000,in_stack_00000004);
  if (*DAT_2c5cdbcc != in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar1;
}

