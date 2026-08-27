/* FUN_1408b3a4 @ 0x1408b3a4 */

void FUN_1408b3a4(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short *psVar2;
  undefined1 *puVar3;
  
  psVar2 = (short *)FUN_140754f4(param_4,4,param_3,param_4,param_4);
  *psVar2 = (short)param_3 + 4;
  *(undefined1 *)((int)psVar2 + 3) = 0;
  *(undefined1 *)(psVar2 + 1) = 1;
  puVar3 = (undefined1 *)FUN_14075458(param_4,4);
  *puVar3 = param_2;
  uVar1 = DAT_1408b410;
  if (*(char *)(param_1 + 0x10) == -1) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x01';
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,uVar1);
}

