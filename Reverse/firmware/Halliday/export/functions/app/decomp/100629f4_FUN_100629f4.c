/* FUN_100629f4 @ 0x100629f4 */

int FUN_100629f4(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(DAT_10062a1c + (param_1 & 0xffff) * 4) = param_2;
  piVar1 = DAT_10062a20;
  if (*DAT_10062a20 == 0) {
    *DAT_10062a20 = *(int *)(DAT_10062a24 + 0x3c);
  }
  iVar2 = *piVar1;
  *(uint *)(iVar2 + param_2 * 4) = param_1;
  *(undefined4 *)(iVar2 + param_2 * 4 + 4) = 0;
  return param_2 + 2;
}

