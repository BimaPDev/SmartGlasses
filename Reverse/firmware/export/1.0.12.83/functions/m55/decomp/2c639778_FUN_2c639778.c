/* FUN_2c639778 @ 0x2c639778 */

void FUN_2c639778(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x60) & 0x1f;
  if (bVar1 == 7) {
    FUN_2c62c314(*(int *)(param_1 + 0x68) + 8,-(param_2 != 0),
                 ((int)(((*(uint *)(param_1 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
                 (uint)(*(ushort *)(param_1 + 0x62) >> 5));
    FUN_2c607df0(param_1);
    return;
  }
  if (bVar1 != 0xb) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x62);
    if (*(ushort *)(param_1 + 0x62) >> 5 != 0) {
      uVar4 = 0;
      uVar3 = *(uint *)(param_1 + 0x60);
      do {
        if ((uVar3 & 0x1fffff) >> 10 != 0) {
          uVar2 = 0;
          do {
            FUN_2c611e18(param_1 + 0x60,(int)(short)uVar2,(int)(short)uVar4,param_2);
            FUN_2c611d2c(param_1 + 0x60,(int)(short)uVar2,(int)(short)uVar4,param_3);
            uVar3 = *(uint *)(param_1 + 0x60);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uVar3 & 0x1fffff) >> 10);
          uVar2 = (uint)*(ushort *)(param_1 + 0x62);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2 >> 5);
    }
    FUN_2c607df0(param_1);
    return;
  }
  FUN_2c62c314(*(undefined4 *)(param_1 + 0x68),(param_3 << 0x18) >> 0x1f & 0xff,
               ((int)(((*(uint *)(param_1 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
               (uint)(*(ushort *)(param_1 + 0x62) >> 5));
  FUN_2c607df0(param_1);
  return;
}

