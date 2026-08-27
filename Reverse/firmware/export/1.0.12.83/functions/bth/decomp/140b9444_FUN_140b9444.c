/* FUN_140b9444 @ 0x140b9444 */

void FUN_140b9444(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_34;
  undefined4 local_30;
  undefined4 local_14;
  
  uVar1 = param_1 * param_2;
  local_14 = *DAT_140b94b8;
  FUN_140a2bac(*DAT_140b94b4,&local_34,param_3,0);
  if (uVar1 < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140b94bc,uVar1,local_34,local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_140b94c0,uVar1);
}

