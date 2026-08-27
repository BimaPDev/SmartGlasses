/* FUN_14037fa8 @ 0x14037fa8 */

void FUN_14037fa8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_14037ff0;
  if (param_1 != 0) {
    *(uint *)(DAT_14037ff0 + 0xc10) = *(uint *)(DAT_14037ff0 + 0xc10) | 0x20000000;
    *(uint *)(iVar1 + 0xc10) = (param_2 & 0xf) << 0x19 | *(uint *)(iVar1 + 0xc10) & 0xe1ffffff;
    return;
  }
  *(uint *)(DAT_14037ff0 + 0xc10) = *(uint *)(DAT_14037ff0 + 0xc10) & 0xdfffffff;
  return;
}

