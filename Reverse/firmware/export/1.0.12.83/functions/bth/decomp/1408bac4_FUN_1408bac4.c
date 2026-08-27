/* FUN_1408bac4 @ 0x1408bac4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408bac4(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_2 + 0xaa) = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  uVar1 = (uint)*(byte *)(param_2 + 0x96);
  uVar2 = _LAB_1408bd30;
  if (uVar1 < 10) {
    uVar2 = *(undefined4 *)(_LAB_1408bd2c + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x46,_LAB_1408bd34,param_1,*(undefined2 *)(param_2 + 0x12),
               *(undefined2 *)(param_2 + 0x14),uVar1,uVar2,0);
}

