/* FUN_2c49c6a0 @ 0x2c49c6a0 */

undefined4 FUN_2c49c6a0(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_11;
  
  local_11 = param_2;
  iVar1 = FUN_2c4bd450(*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),&local_11,1,param_3
                       ,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xdf,DAT_2c49c6f8,DAT_2c49c6f4,DAT_2c49c6f0,local_11,iVar1);
}

