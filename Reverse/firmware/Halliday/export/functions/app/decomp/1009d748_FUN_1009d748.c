/* FUN_1009d748 @ 0x1009d748 */

void FUN_1009d748(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (param_4[2] - *param_4) + 1;
  iVar1 = (param_4[3] - param_4[1]) + 1;
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = iVar1 / 2;
  if (param_3 <= iVar1 / 2) {
    iVar2 = param_3;
  }
  if (param_3 == 0x7fff) {
    if (param_4[3] - param_4[1] == param_4[2] - *param_4) {
      fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      iVar4 = (int)(fVar3 * DAT_1009d8fc);
      *param_1 = 2;
      param_1[1] = *param_4 + iVar2;
      param_1[2] = param_4[1];
      iVar1 = -iVar2;
      param_1[5] = 0;
      param_1[6] = iVar2;
      param_1[0xb] = 0;
      param_1[0xc] = iVar4;
      param_1[0x13] = 0;
      param_1[0x14] = iVar1;
      param_1[0x19] = 0;
      param_1[0x1a] = -iVar4;
      param_1[3] = 9;
      param_1[4] = iVar4;
      param_1[7] = iVar2 - iVar4;
      param_1[8] = iVar2;
      param_1[9] = iVar2;
      param_1[10] = 9;
      param_1[0xd] = iVar4 - iVar2;
      param_1[0xe] = iVar2;
      param_1[0xf] = iVar1;
      param_1[0x10] = iVar2;
      param_1[0x11] = 9;
      param_1[0x12] = -iVar4;
      param_1[0x15] = iVar4 - iVar2;
      param_1[0x16] = iVar1;
      param_1[0x17] = iVar1;
      param_1[0x18] = 9;
      param_1[0x1b] = iVar2 - iVar4;
      param_1[0x1c] = iVar1;
      param_1[0x1d] = iVar2;
      param_1[0x1e] = iVar1;
      param_1[0x1f] = 0;
      iVar1 = 0x20;
      goto LAB_1009d7ec;
    }
  }
  else if (param_3 < 1) {
    *param_1 = 2;
    param_1[1] = *param_4;
    param_1[2] = param_4[1];
    param_1[3] = 4;
    param_1[4] = param_4[2] + 1;
    param_1[5] = param_4[1];
    param_1[6] = 4;
    param_1[7] = param_4[2] + 1;
    param_1[8] = param_4[3] + 1;
    param_1[9] = 4;
    param_1[10] = *param_4;
    param_1[0xb] = param_4[3] + 1;
    param_1[0xc] = 4;
    param_1[0xd] = *param_4;
    param_1[0xe] = param_4[1];
    param_1[0xf] = 0;
    iVar1 = 0x10;
    goto LAB_1009d7ec;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  iVar5 = (int)(fVar3 * DAT_1009d8fc);
  *param_1 = 2;
  param_1[1] = *param_4 + iVar2;
  iVar1 = param_4[1];
  param_1[3] = 4;
  param_1[2] = iVar1;
  param_1[4] = (param_4[2] + 1) - iVar2;
  param_1[5] = param_4[1];
  param_1[6] = 9;
  param_1[7] = iVar5;
  param_1[8] = 0;
  param_1[9] = iVar2;
  param_1[10] = iVar2 - iVar5;
  param_1[0xb] = iVar2;
  param_1[0xc] = iVar2;
  param_1[0xd] = 4;
  iVar4 = -iVar2;
  param_1[0xe] = param_4[2] + 1;
  iVar1 = param_4[3];
  param_1[0x11] = 0;
  param_1[0x12] = iVar5;
  param_1[0xf] = (iVar1 + 1) - iVar2;
  param_1[0x10] = 9;
  param_1[0x13] = iVar5 - iVar2;
  param_1[0x14] = iVar2;
  param_1[0x15] = iVar4;
  param_1[0x16] = iVar2;
  param_1[0x17] = 4;
  param_1[0x18] = *param_4 + iVar2;
  iVar1 = param_4[3];
  param_1[0x1b] = -iVar5;
  param_1[0x1c] = 0;
  param_1[0x19] = iVar1 + 1;
  param_1[0x1a] = 9;
  param_1[0x1d] = iVar4;
  param_1[0x1e] = iVar5 - iVar2;
  param_1[0x1f] = iVar4;
  param_1[0x20] = iVar4;
  param_1[0x21] = 4;
  param_1[0x22] = *param_4;
  iVar1 = param_4[1];
  param_1[0x25] = 0;
  param_1[0x26] = -iVar5;
  param_1[0x23] = iVar1 + iVar2;
  param_1[0x24] = 9;
  param_1[0x27] = iVar2 - iVar5;
  param_1[0x28] = iVar4;
  iVar1 = 0x2c;
  param_1[0x29] = iVar2;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = 0;
LAB_1009d7ec:
  *param_2 = iVar1 << 2;
  return;
}

