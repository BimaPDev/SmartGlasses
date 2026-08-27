/* FUN_1408db0c @ 0x1408db0c */

void FUN_1408db0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)FUN_14075258(param_4);
  FUN_1408cb68(param_1,*(undefined2 *)(param_2 + 0xe),param_3,*puVar1,puVar1[1]);
  iVar2 = FUN_1408b254(param_2,*puVar1,6);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1408db98,param_1,*(undefined4 *)(iVar2 + 0xc),
                 *(undefined2 *)(iVar2 + 0x12),*(undefined2 *)(iVar2 + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1408db9c,param_1,*puVar1);
}

