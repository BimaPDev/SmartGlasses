/* FUN_2c5d4180 @ 0x2c5d4180 */

void FUN_2c5d4180(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = *DAT_2c5d4244;
  *(char *)(param_1 + 0xe0) = (char)param_2;
  iStack_18 = param_2;
  FUN_2c620fa4(0x3f9,&iStack_18,param_3,0);
  FUN_2c5c55d8();
  iVar2 = FUN_2c5c59bc();
  if (iVar2 != 0) {
    FUN_2c5cfefc(*(undefined1 *)(param_1 + 0xe0));
  }
  if (param_2 == 2) {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x94),3,0xfffffff0,0xe);
    FUN_2c5d40b4(param_1,2);
    cVar1 = *(char *)(param_1 + 0x108);
  }
  else {
    if (param_2 == 4) {
      FUN_2c6072bc(*(undefined4 *)(param_1 + 0x94),6,0xfffffff0,0xffffff9c);
    }
    else if (param_2 == 1) {
      FUN_2c6072bc(*(undefined4 *)(param_1 + 0x94),1,0x10,0xe);
    }
    else {
      FUN_2c6072bc(*(undefined4 *)(param_1 + 0x94),4,0x10,0xffffff9c);
    }
    FUN_2c5d40b4(param_1,param_2);
    cVar1 = *(char *)(param_1 + 0x108);
  }
  if (cVar1 != '\0') {
    FUN_2c5d3040(param_1);
  }
  if (*DAT_2c5d4244 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

