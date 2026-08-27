/* FUN_14001620 @ 0x14001620 */

int FUN_14001620(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = DAT_1400165c;
  if ((*(uint *)(DAT_1400165c + 0xc) & 0x1f00) == 0) {
    return param_3;
  }
  if (param_3 != 0) {
    iVar2 = param_3 + -1;
    param_3 = param_3 - ((*(uint *)(DAT_1400165c + 0xc) & 0x1fff) >> 8);
    do {
      bVar3 = iVar2 == param_3;
      *(undefined1 *)(iVar1 + 8) = *param_2;
      iVar2 = iVar2 + -1;
      if (bVar3) {
        return param_3;
      }
      param_2 = param_2 + 1;
    } while (iVar2 != -1);
  }
  return 0;
}

