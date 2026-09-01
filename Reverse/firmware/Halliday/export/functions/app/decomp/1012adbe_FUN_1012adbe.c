/* FUN_1012adbe @ 0x1012adbe */

void FUN_1012adbe(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xffff) < param_2; uVar1 = uVar1 + 1) {
    *(ushort *)(param_1 + uVar1 * 2) = (ushort)((param_3 + (uVar1 & 0xffff)) * 0x20000 >> 0x11);
  }
  return;
}

