/* FUN_1011ae02 @ 0x1011ae02 */

int FUN_1011ae02(int param_1,uint param_2,int param_3,uint *param_4,int param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  
  *param_4 = 0;
  while( true ) {
    while( true ) {
      if (param_2 <= *param_4) {
        return param_1;
      }
      iVar1 = FUN_1011b2c8(*(undefined4 *)(param_3 + *param_4 * 4));
      if (iVar1 == 0) break;
      *param_4 = *param_4 + 1;
    }
    iVar1 = FUN_1011adac(param_1,*(undefined4 *)(param_3 + *param_4 * 4),param_5);
    if (iVar1 == 0) break;
    uVar2 = *param_4;
    *param_4 = uVar2 + 1;
    param_1 = iVar1;
    if ((param_6 != '\0') && (param_5 == iVar1)) {
      *param_4 = uVar2;
      return 0;
    }
  }
  return param_1;
}

