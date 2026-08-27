/* FUN_140b6044 @ 0x140b6044 */

void FUN_140b6044(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x14d8) != 0) && (*(byte *)(param_1 + 0x14dc) != param_2)) {
    uVar1 = DAT_140b6094;
    if (param_2 != 0) {
      uVar1 = DAT_140b6098;
    }
    if (param_3 == 0) {
      param_3 = DAT_140b609c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140b60a4,DAT_140b60a0,uVar1,param_3);
  }
  return;
}

