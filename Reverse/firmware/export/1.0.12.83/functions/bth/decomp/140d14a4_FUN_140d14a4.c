/* FUN_140d14a4 @ 0x140d14a4 */

void FUN_140d14a4(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [100];
  undefined1 auStack_10 [8];
  
  param_2 = param_2 - param_1;
  FUN_140e5278(auStack_74,DAT_140d14ec,0x69);
  iVar1 = -(param_2 + 0x70U & 0xfffffff8);
  FUN_140e5278(auStack_78 + iVar1,auStack_74,0x68);
  FUN_140e5278(auStack_10 + iVar1,param_1,param_2);
  auStack_10[param_2 + iVar1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140cb800(auStack_78 + iVar1);
}

