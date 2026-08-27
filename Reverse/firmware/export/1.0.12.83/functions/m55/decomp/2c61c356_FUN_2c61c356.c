/* FUN_2c61c356 @ 0x2c61c356 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Removing unreachable block (ram,0x2c606b24) */
/* WARNING: Removing unreachable block (ram,0x2c606b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c356(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(short *)(param_2 + 0x28) = (short)param_4;
  *(undefined4 *)(param_2 + 0x70) = param_4;
  *(undefined4 *)(param_2 + 0x74) = param_4;
  FUN_2c62e7b4();
  uVar1 = _LAB_2c61c3a4;
  *(undefined4 *)(param_2 + 0x58) = 0x683;
  *(undefined2 *)(param_2 + 0x6c) = 0xffff;
  uVar2 = _LAB_2c61c3a8;
  *(undefined4 *)(param_2 + 0x3c) = _LAB_2c61c3ac;
  *(int *)(param_2 + 0x2c) = param_2;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  FUN_2c62e8ec(param_1);
  FUN_2c606abc(param_2,0x310);
  iVar5 = *DAT_2c606b68;
  iVar3 = FUN_2c607214();
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffffffd;
  iVar4 = FUN_2c607214(param_2);
  if (iVar4 == iVar3) {
    if (*DAT_2c606b68 == iVar5) {
      return;
    }
  }
  else {
    FUN_2c6041d4(param_2);
    if (*DAT_2c606b68 == iVar5) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

