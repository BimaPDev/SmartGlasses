/* FUN_2c55f2a8 @ 0x2c55f2a8 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */

void FUN_2c55f2a8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),
                       param_4 * (*(short *)(param_1 + 0x1e) + -1) + param_2 + -1);
  FUN_2c608808(*(undefined4 *)(param_1 + 0x24),uVar1,9,0,0);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar5 = *DAT_2c606b68;
  iVar3 = FUN_2c607214();
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe;
  FUN_2c607df0(iVar2);
  iVar4 = FUN_2c607214(iVar2);
  if (iVar4 != 0) {
    FUN_2c6041d4(iVar2);
    FUN_2c607248();
    FUN_2c607248(iVar2);
  }
  iVar4 = FUN_2c607214(iVar2);
  if (iVar4 == iVar3) {
    if (*DAT_2c606b68 == iVar5) {
      return;
    }
  }
  else {
    FUN_2c6041d4(iVar2);
    if (*DAT_2c606b68 == iVar5) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

