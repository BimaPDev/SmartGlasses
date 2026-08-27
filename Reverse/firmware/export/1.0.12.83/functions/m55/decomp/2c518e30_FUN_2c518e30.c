/* FUN_2c518e30 @ 0x2c518e30 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Removing unreachable block (ram,0x2c606b24) */
/* WARNING: Removing unreachable block (ram,0x2c606b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518e30(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_2 + 0x5c) = 3;
  uVar4 = FUN_2c6073ec(param_2);
  *(undefined2 *)(param_2 + 0x54) = uVar4;
  uVar4 = FUN_2c6073f8(param_2);
  *(undefined2 *)(param_2 + 0x56) = uVar4;
  *(undefined4 *)(param_2 + 0x38) = 0xffffff59;
  *(undefined4 *)(param_2 + 0x3c) = 0x14e;
  *(undefined4 *)(param_2 + 0x48) = 0xfffffeb2;
  *(int *)(param_2 + 0x30) = param_2;
  *(int *)(param_2 + 0x40) = param_2;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x14e;
  *(undefined4 *)(param_2 + 0x4c) = 0x14e;
  *(int *)(param_2 + 0x50) = param_2;
  FUN_2c62e7b4(param_2 + 100);
  uVar1 = _LAB_2c518eb4;
  *(undefined4 *)(param_2 + 0x90) = 0xa7;
  *(undefined4 *)(param_2 + 0x8c) = 100;
  *(undefined2 *)(param_2 + 0xa4) = 0xffff;
  uVar3 = _LAB_2c518ebc;
  uVar2 = _LAB_2c518eb8;
  *(int *)(param_2 + 100) = param_2;
  *(undefined4 *)(param_2 + 0x74) = uVar3;
  *(undefined4 *)(param_2 + 0x68) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  FUN_2c62e8ec(param_2 + 100);
  iVar7 = *DAT_2c606b68;
  iVar5 = FUN_2c607214();
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffffffd;
  iVar6 = FUN_2c607214(param_2);
  if (iVar6 == iVar5) {
    if (*DAT_2c606b68 == iVar7) {
      return;
    }
  }
  else {
    FUN_2c6041d4(param_2);
    if (*DAT_2c606b68 == iVar7) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

