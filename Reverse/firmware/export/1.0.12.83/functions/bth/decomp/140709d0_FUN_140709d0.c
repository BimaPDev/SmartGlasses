/* FUN_140709d0 @ 0x140709d0 */

undefined4 FUN_140709d0(uint param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 < 2) && (iVar1 = *(int *)(DAT_140709f4 + (param_1 + 6) * 4), iVar1 != 0)) &&
     (param_2 < *(byte *)(iVar1 + 0x3c))) {
    return *(undefined4 *)(iVar1 + (param_2 + 0x10) * 4);
  }
  return 0;
}

