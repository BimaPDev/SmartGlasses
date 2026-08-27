/* FUN_140afb78 @ 0x140afb78 */

void FUN_140afb78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_140afc10;
  FUN_1402a6e8(4,0x223,DAT_140afc14,DAT_140afc18,DAT_140afc0c,DAT_140afc08);
  FUN_1402a9fc(DAT_140afc1c,1,6,param_1);
  local_1c = 0;
  local_18 = 0;
  iVar1 = FUN_140db784(param_1,&local_1c,6);
  if (iVar1 == 0) {
    FUN_140a1548(0,auStack_130);
    FUN_1404a1fc(auStack_130);
    FUN_1404a2d4(auStack_130);
  }
  else {
    FUN_140e5278(auStack_130,param_1,param_2);
    FUN_1404a1fc(auStack_130);
    FUN_1404a2d4(auStack_130);
  }
  *DAT_140afc20 = 1;
  if (*DAT_140afc10 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

