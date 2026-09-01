/* thunk_FUN_100f44ac @ 0x100f08f4 */

undefined4 thunk_FUN_100f44ac(uint param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_100f44f8;
  if ((param_1 < 3) && (param_4 != (int *)0x0)) {
    if ((*param_4 == 0) || (param_4[1] == 0)) {
      uVar3 = 0xffffffea;
    }
    else if (*(int *)(DAT_100f44f8 + param_1 * 4) == 0) {
      if (*DAT_100f44fc == 0) {
        *DAT_100f44fc = param_2;
      }
      iVar2 = DAT_100f4500;
      *(int **)(iVar1 + param_1 * 4) = param_4;
      *(int *)(iVar2 + param_1 * 8) = param_2;
      uVar3 = 0;
      *(undefined4 *)(iVar2 + param_1 * 8 + 4) = param_3;
    }
    else {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffea;
}

