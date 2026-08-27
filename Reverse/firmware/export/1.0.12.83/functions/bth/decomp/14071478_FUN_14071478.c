/* FUN_14071478 @ 0x14071478 */

undefined4 FUN_14071478(uint param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((((param_1 < 2) && (iVar1 = *(int *)(DAT_140714ac + (param_1 + 6) * 4), iVar1 != 0)) &&
      (param_2 < *(byte *)(iVar1 + 0x3c))) &&
     ((iVar1 = *(int *)(iVar1 + (param_2 + 0x10) * 4), iVar1 != 0 &&
      ((int)((uint)*(ushort *)(iVar1 + 0x12) << 0x18) < 0)))) {
    *(undefined2 *)(iVar1 + 0x18) = param_3;
    *(undefined2 *)(iVar1 + 0x1a) = param_3;
    *(undefined2 *)(iVar1 + 0x1c) = param_3;
    *(undefined2 *)(iVar1 + 0x1e) = param_3;
    return 0;
  }
  return 0x43;
}

