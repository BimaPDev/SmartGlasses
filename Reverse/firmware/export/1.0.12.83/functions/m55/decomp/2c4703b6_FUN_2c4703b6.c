/* FUN_2c4703b6 @ 0x2c4703b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4703b6(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_80c [2048];
  int iStack_c;
  
  pcVar2 = _LAB_2c470434;
  bVar1 = *param_3;
  iStack_c = *_LAB_2c470430;
  *param_3 = bVar1 + 1;
  FUN_2c674268(auStack_80c,
               (uint)bVar1 - param_1 * (uint)((ulonglong)param_2 * (ulonglong)(uint)bVar1 >> 0x25) &
               0xff,0x800);
  func_0x2c471668(0,auStack_80c);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  else {
    iVar3 = FUN_2c478b68();
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xf8))();
      func_0x2c6746a8();
      *pcVar2 = '\0';
    }
  }
  if (*_LAB_2c470430 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

