/* FUN_1408a9c8 @ 0x1408a9c8 */

void FUN_1408a9c8(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined2 *)(param_2 + 0x16);
  uVar2 = FUN_1408a8dc(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x49,DAT_1408aa80,param_1,*(undefined4 *)(param_2 + 0xc),param_2,
               *(undefined2 *)(param_2 + 0x12),*(undefined2 *)(param_2 + 0x14),uVar1,uVar2,
               *(undefined1 *)(param_2 + 0xaa),*(undefined1 *)(param_2 + 0xa9));
}

