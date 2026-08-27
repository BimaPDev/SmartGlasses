/* FUN_2c4dd644 @ 0x2c4dd644 */

void FUN_2c4dd644(undefined4 param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_4 + 8);
  if ((iVar1 != -1) && (*(char *)(param_4 + 0x21) != '\0')) {
    uVar2 = DAT_2c4dd680;
    if (*(int *)(param_4 + 0xc) != 0) {
      uVar2 = DAT_2c4dd67c;
      iVar1 = *(int *)(param_4 + 0xc);
    }
    iVar1 = FUN_2c66b450(*param_2,param_3 - *param_2,uVar2,iVar1,param_4);
    *param_2 = iVar1 + *param_2;
    if (param_3 < *param_2) {
      *param_2 = param_3;
    }
  }
  return;
}

