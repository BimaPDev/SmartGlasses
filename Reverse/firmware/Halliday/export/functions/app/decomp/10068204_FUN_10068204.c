/* FUN_10068204 @ 0x10068204 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_10068204(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  
  uVar1 = FUN_1011ea40(uRam10068234,uRam10068238,0x140,uRam10068234,in_r3);
  *(undefined4 *)(DAT_1006823c + 8) = uVar1;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_100681cc();
  FUN_10113184();
  FUN_10115654();
  FUN_10068a5c();
  FUN_101131bc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

