/* FUN_2c631368 @ 0x2c631368 */

/* WARNING: Removing unreachable block (ram,0x2c606aa0) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c631368(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(byte *)(param_2 + 0x5a) = *(byte *)(param_2 + 0x5a) & 0x80 | 3;
  uVar1 = FUN_2c6073ec(param_2);
  *(undefined2 *)(param_2 + 0x2c) = uVar1;
  uVar1 = FUN_2c6073f8(param_2);
  *(undefined2 *)(param_2 + 0x2e) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x1000000;
  *(ushort *)(param_2 + 0x5a) = *(ushort *)(param_2 + 0x5a) & 0xfc7f | 0x80;
  FUN_2c606abc(param_2,2);
  iVar4 = *DAT_2c606ab8;
  iVar2 = FUN_2c607214();
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x10000;
  iVar3 = FUN_2c607214(param_2);
  if (iVar3 != iVar2) {
    FUN_2c6041d4(param_2);
    FUN_2c607248();
    FUN_2c607248(param_2);
  }
  if (*DAT_2c606ab8 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

