/* FUN_2c6710c2 @ 0x2c6710c2 */

undefined4 FUN_2c6710c2(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)param_2[2] <= param_4) {
    uVar3 = param_2[2];
    if ((*(ushort *)(param_2 + 3) & 0x480) != 0) {
      iVar4 = *param_2 - param_2[4];
      uVar2 = param_4 + 1 + iVar4;
      uVar3 = (param_2[5] * 3) / 2;
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
      }
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
        iVar1 = FUN_2c669c14(param_1,uVar3);
        if (iVar1 == 0) {
LAB_2c671108:
          *param_1 = 0xc;
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        FUN_2c674668(iVar1,param_2[4],iVar4);
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
      }
      else {
        iVar1 = FUN_2c671064(param_1,param_2[4],uVar3);
        if (iVar1 == 0) {
          FUN_2c669b3c(param_1,param_2[4]);
          goto LAB_2c671108;
        }
      }
      param_2[4] = iVar1;
      param_2[5] = uVar3;
      *param_2 = iVar1 + iVar4;
      param_2[2] = uVar3 - iVar4;
      uVar3 = param_4;
    }
    if (uVar3 <= param_4) goto LAB_2c671148;
  }
  uVar3 = param_4;
LAB_2c671148:
  FUN_2c673eb8(*param_2,param_3,uVar3);
  param_2[2] = param_2[2] - uVar3;
  *param_2 = *param_2 + uVar3;
  return 0;
}

