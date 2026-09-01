/* FUN_100bd820 @ 0x100bd820 */

void FUN_100bd820(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  
  puVar1 = DAT_100bd854;
  if (param_1 == 0xf) {
    bVar2 = param_2 == 8;
  }
  else {
    if (param_1 != 0xb) goto LAB_100bd82a;
    bVar2 = param_2 == 0x10;
  }
  if (bVar2) {
    *DAT_100bd854 = (char)param_1;
    puVar1[1] = (char)param_2;
    return;
  }
LAB_100bd82a:
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100bd850,0x74,DAT_100bd84c,DAT_100bd848,param_4);
}

