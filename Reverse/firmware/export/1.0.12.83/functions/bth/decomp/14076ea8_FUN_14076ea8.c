/* FUN_14076ea8 @ 0x14076ea8 */

void FUN_14076ea8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_14076f20;
  FUN_140e5148(*(undefined4 *)(DAT_14076f20 + 4),0xffffffff);
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_14076ee0;
    if (*(int *)(iVar1 + 0x248) == param_2) {
      if (*(char *)(iVar1 + 0x24c) != '\0') goto LAB_14076f08;
      *(undefined4 *)(iVar1 + 0x248) = 0;
    }
  }
  else {
    if (*(char *)(iVar1 + 0x24c) != '\0') {
LAB_14076f08:
      FUN_14075110(DAT_14076f24);
    }
    param_2 = *(int *)(iVar1 + 0x248);
    *(undefined4 *)(iVar1 + 0x248) = 0;
    if (param_2 == 0) {
      FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
      return;
    }
  }
  FUN_14075428(param_2);
  if (*(short *)(iVar1 + 0x250) != 0) {
    *(short *)(iVar1 + 0x250) = *(short *)(iVar1 + 0x250) + -1;
  }
LAB_14076ee0:
  FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
  return;
}

